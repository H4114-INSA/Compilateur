//
// Created by thomas on 15/03/18.
//

#include "ExpressionConstante.h"

ExpressionConstante::ExpressionConstante(TypeValeur atypeValeur, int avaleur)
{
    this->setTypeExpression(TypeExpression::constante);
    this->typeValeur = atypeValeur;
    this->valeur = avaleur;
}

TypeValeur ExpressionConstante::getTypeValeur() {
    return typeValeur;
}

int ExpressionConstante::getValeur() {
    return valeur;
}

void ExpressionConstante::resolutionPorteeVariable(string idContexte, vector<string> *pileVar,
                                                   vector<string> *pileFonct, map<string, Declaration *> *varMap) {
}