//
// Created by thomas on 15/03/18.
//

#include "ExpressionVariable.h"


ExpressionVariable::ExpressionVariable(string anom, TypeVariable atype, int valeur) {
    this->setTypeExpression(TypeExpression::variable);
    this->nom=anom;
    this->type = atype;
    this->valeur = valeur;
}

ExpressionVariable::~ExpressionVariable() {

}

int ExpressionVariable::getValeur() {
    return this->valeur;
}

string ExpressionVariable::getNom() {
    return this->getNom();
}

TypeVariable ExpressionVariable::getType() {
    return this-> getType();
}