//
// Created by thomas on 15/03/18.
//

#include "Return.h"

Return::Return() {

}

Return::Return(Expression* e) {
    this->expression=e;
}

Expression* Return::getExpression() {
    return this->expression;
}

string Return::toString() {
    return "Return ( " + expression->toString() + " )";
}

string Return::buildIR(CFG *cfg) {
    string res ="";

    if(this->getExpression() != nullptr){

        if(cfg->ast->getTypeRetour() == "void" && (this->getExpression()->getTypeRetour() == "char"
                                                         || this->getExpression()->getTypeRetour() == "int32_t"
                                                              || this->getExpression()->getTypeRetour() == "int64_t")){
            cerr << endl<< "Erreur : les types de retour de la fonction et de l'expression ne sont pas compatibles "<<endl;
            cerr << "La fonction retourne void alors que l'expression est un "<< this->getExpression()->getTypeRetour() <<endl;
            exit(6);
        }


        Type t;
        if(this->getExpression()->getTypeRetour()== "char"){ t = Type::Char;}
        else if(this->getExpression()->getTypeRetour() == "int32_t") {t = Type::Int32_t;}
        else if(this->getExpression()->getTypeRetour() == "int64_t") {t= Type::Int64_t;}


        string retvalue = this->getExpression()->buildIR(cfg);
        res=retvalue;

        vector<string> params;
        params.push_back(cfg->calcul_offset(retvalue));

        cfg->current_bb->add_IRInstr(IRInstr::Operation::ret,t,params);
    }

    return res;
}