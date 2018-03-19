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
    return "to implement";
}

void ExpressionUnaire::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                                map<string, Declaration *> *varMap) {
    expression->resolutionPorteeVariable(idContexte, pileVar, pileFonct, varMap);
}