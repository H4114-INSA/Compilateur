//
// Created by thomas on 15/03/18.
//

#include "ExpressionUnaire.h"


ExpressionUnaire::ExpressionUnaire(Expression *e,SymboleUnaire symb) {
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