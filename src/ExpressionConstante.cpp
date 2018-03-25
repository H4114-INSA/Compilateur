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
    cout << "Type valeur "<< typeValeur<<endl;
    return typeValeur;
}