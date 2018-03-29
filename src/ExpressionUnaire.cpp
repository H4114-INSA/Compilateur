//
// Created by thomas on 15/03/18.
//

#include "ExpressionUnaire.h"


ExpressionUnaire::ExpressionUnaire(Expression *e,SymboleUnaire symb) {
    this->setTypeExpression(TypeExpression::unaire);
    this->expression=e;
    this->symbole = symb;
}

ExpressionUnaire::~ExpressionUnaire() {
    delete(expression);
}

Expression* ExpressionUnaire::getExpression() {
    return this->expression;
}

SymboleUnaire ExpressionUnaire::getSymbole() {
    return this-> symbole;
}

string ExpressionUnaire::toString() {
    string res = " ExpressionUnaire " +SymboleUnaireToString(symbole) +" (";
    res += " " + expression->toString();
    res += ") ";
    return res;
}

void ExpressionUnaire::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                                map<string, Declaration *> *varMap,map<string,Fonction*>* fonctMap) {
    expression->resolutionPorteeVariable(idContexte, pileVar, pileFonct, varMap, fonctMap);
}

string ExpressionUnaire::typageExpression(string idContexte, map<string, Declaration *> *varMap,
                                          map<string, Fonction *> *fonctMap) {
    string typeRetour = expression->typageExpression(idContexte, varMap, fonctMap);
    this->setTypeRetourExpression(typeRetour);
    return typeRetour;
}

string ExpressionUnaire::buildIR(CFG *cfg) {

}
