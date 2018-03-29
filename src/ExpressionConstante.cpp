//
// Created by thomas on 15/03/18.
//

#include "ExpressionConstante.h"

ExpressionConstante::ExpressionConstante(string atypeValeur, int avaleur, bool isSpecial)
{
    this->setTypeExpression(TypeExpression::constante);
    this->typeValeur = atypeValeur;
    this->valeur = avaleur;
    this->isSpecial=isSpecial;
}

string ExpressionConstante::getTypeValeur() {
    return typeValeur;
}

int ExpressionConstante::getValeur() {
    return valeur;
}

void ExpressionConstante::resolutionPorteeVariable(string idContexte, vector<string> *pileVar,
                                                   vector<string> *pileFonct, map<string, Declaration *> *varMap, map<string,Fonction*>* fonctMap) {
}

string ExpressionConstante::toString() {
    //return "Expression Constante";
    return "ExpressionConstante  ( Type : "+ typeValeur+ ", " + to_string(valeur) + " ) ";
}

string ExpressionConstante::typageExpression(string idContexte, map<string, Declaration *> *varMap,
                                             map<string, Fonction *> *fonctMap) {
    this->setTypeRetourExpression(typeValeur);
    return typeValeur;
}

string ExpressionConstante::buildIR(CFG *cfg) {
    Type t;
    if(this->typeValeur == "char"){ t = Type::Char;}
    else if(this->typeValeur == "int32_t") {t = Type::Int32_t;}
    else if(this->typeValeur == "int64_t") {t= Type::Int64_t;}

    string nomVar = cfg->create_new_tempvar(t);
    IRVariable* var = cfg->getVariable(nomVar);

    // ldconst nomVar valeur
    vector<string> params;
    params.push_back(cfg->calcul_offset(nomVar)+"(%rbp)");
    params.push_back(to_string(this->valeur));

    cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst,t,params);

    return nomVar;
}
