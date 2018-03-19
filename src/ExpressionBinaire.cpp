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
    return "to implement";
}

void ExpressionBinaire::resolutionPorteeVariable(string idContexte, vector<string> *pileVar,
                                                 vector<string> *pileFonct, map<string, Declaration *> *varMap) {
    expression1->resolutionPorteeVariable(idContexte, pileVar, pileFonct,varMap);
    expression2->resolutionPorteeVariable(idContexte, pileVar, pileFonct, varMap);
}