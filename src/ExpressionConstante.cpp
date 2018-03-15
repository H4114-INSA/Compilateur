//
// Created by thomas on 15/03/18.
//

#include "ExpressionConstante.h"

ExpressionConstante::ExpressionConstante(TypeExpression atypeExpression, TypeValeur atypeValeur, int avaleur)
{
    this->setTypeExpression(atypeExpression);
    this->typeValeur = atypeValeur;
    this->valeur = avaleur;
}

TypeValeur ExpressionConstante::getTypeValeur() {
    return typeValeur;
}

int ExpressionConstante::getValeur() {
    return valeur;
}