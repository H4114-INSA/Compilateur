//
// Created by thomas on 15/03/18.
//

#include "ExpressionBinaire.h"

ExpressionBinaire::ExpressionBinaire(Expression *e1, Expression *e2, SymboleBinaire symb) {
    this->setTypeExpression(TypeExpression::binaire);
    this->expression1=e1;
    this->expression2=e2;
    this->symbole = symb;
}

ExpressionBinaire::~ExpressionBinaire() {
    delete(expression1);
    delete(expression2);
}

Expression* ExpressionBinaire::getLeftExpression() {
    return this->expression1;
}

Expression* ExpressionBinaire::getRightExpression() {
    return this-> expression2;
}

SymboleBinaire ExpressionBinaire::getSymbole() {
    return this-> symbole;
}

string ExpressionBinaire::toString() {
    //return "to implement";
    string res = " ExpressionBinaire " + SymboleBinaireToString(symbole) +" (" ;
    res += " " + expression1->toString();
    res += " " + expression2->toString();
    res += ") ";
    return res;
}

void ExpressionBinaire::resolutionPorteeVariable(string idContexte, vector<string> *pileVar,
                                                 vector<string> *pileFonct, map<string, Declaration *> *varMap, map<string,Fonction*>* fonctMap) {
    expression1->resolutionPorteeVariable(idContexte, pileVar, pileFonct,varMap, fonctMap);
    expression2->resolutionPorteeVariable(idContexte, pileVar, pileFonct, varMap,fonctMap);
}

void ExpressionBinaire::setLeftExpression(Expression *ex) {
    this->expression1 = ex;
}

void ExpressionBinaire::setRightExpression(Expression *ex) {
    this->expression2=ex;
}

string ExpressionBinaire::typageExpression(string idContexte, map<string, Declaration *> *varMap,
                                           map<string, Fonction *> *fonctMap) {
    string typeRetourExpression1 = expression1->typageExpression(idContexte, varMap, fonctMap);
    string typeRetourExpression2 = expression2->typageExpression(idContexte, varMap, fonctMap);

    if(typeRetourExpression1 == typeRetourExpression2){
        this->setTypeRetourExpression(typeRetourExpression1);
        return typeRetourExpression1;
    }
    else if ((typeRetourExpression1 == "int32_t" && typeRetourExpression2 == "int64_t") ||
            (typeRetourExpression1=="int64_t" && typeRetourExpression2 =="int32_t") ) {
        cout << "Warning : Possibilité d'une perte de précision car les types des opérandes d'une expression ne sont pas identiques dans la fonction "
            << idContexte << "(type 1 : " << typeRetourExpression1 << ", type 2 : "<< typeRetourExpression2 << ")"<<endl;
        this->setTypeRetourExpression("int32_t");
        return "int32_t";
    }
    else if((typeRetourExpression1 == "char" && (typeRetourExpression2 =="int32_t" ||typeRetourExpression2 == "int64_t" ))
                || ((typeRetourExpression1=="int32_t" || typeRetourExpression1 == "int64_t") && typeRetourExpression2 == "char")
                || (typeRetourExpression1 == "void" && (typeRetourExpression2 =="int32_t" ||typeRetourExpression2 == "int64_t" || typeRetourExpression2 =="char"))
                || (typeRetourExpression2 == "void" && (typeRetourExpression1 =="int32_t" ||typeRetourExpression1 == "int64_t" || typeRetourExpression1 == "char"))){

        cerr<< "Une erreur est survenue dans la fonction " << idContexte <<" : incompatibilité de type entre deux expressions (type 1 : "
           << typeRetourExpression1 << ", type 2 : "<< typeRetourExpression2 << ")"<<endl;
        cerr << "Arrêt de l'exécution." <<endl;
        exit(6);
    }
    return "erreur";
}

string ExpressionBinaire::buildIR(CFG *cfg) {
    string res = "";
    if(this->symbole == SymboleBinaire::egal){
        Type t;
        if(this->getTypeRetour()== "char"){ t = Type::Char;}
        else if(this->getTypeRetour() == "int32_t") {t = Type::Int32_t;}
        else if(this->getTypeRetour() == "int64_t") {t= Type::Int64_t;}

        string leftValue = this->expression1->buildIR(cfg);
        string rightValue = this->expression2->buildIR(cfg);
        res= rightValue;

        vector<string> params;
        params.push_back(cfg->calcul_offset(rightValue));
        params.push_back(cfg->calcul_offset(leftValue));

        cfg->current_bb->add_IRInstr(IRInstr::Operation::copy,t,params);
    } else {
        Type t;
        if(this->getTypeRetour()== "char"){ t = Type::Char;}
        else if(this->getTypeRetour() == "int32_t") {t = Type::Int32_t;}
        else if(this->getTypeRetour() == "int64_t") {t= Type::Int64_t;}

        string leftValue = this->expression1->buildIR(cfg);
        string rightValue = this->expression2->buildIR(cfg);

        string nomTempAdd = cfg->create_new_tempvar(t);

        vector<string> params;
        params.push_back(cfg->calcul_offset(nomTempAdd));
        params.push_back(cfg->calcul_offset(leftValue));
        params.push_back(cfg->calcul_offset(rightValue));

        if(this->symbole == SymboleBinaire::plus){
            cfg->current_bb->add_IRInstr(IRInstr::Operation::operation_binaire_add,t,params);
        }else if(this->symbole == SymboleBinaire::moins){
            cfg->current_bb->add_IRInstr(IRInstr::Operation::operation_binaire_sub,t,params);
        }
        else if(this->symbole == SymboleBinaire::mult) {
            cfg->current_bb->add_IRInstr(IRInstr::Operation::operation_binaire_mult,t,params);
        }
        else if(this->symbole == SymboleBinaire::div) {
            cfg->current_bb->add_IRInstr(IRInstr::Operation::operation_binaire_div,t,params);
        }
        else if(this->symbole == SymboleBinaire::strictinf){
                cfg->current_bb->add_IRInstr(IRInstr::Operation::operation_binaire_strictless,t,params);
        }

        res=nomTempAdd;
    }
    return res;
}
