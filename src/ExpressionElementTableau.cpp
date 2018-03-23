//
// Created by thomas on 15/03/18.
//

#include "ExpressionElementTableau.h"

ExpressionElementTableau::ExpressionElementTableau() {

}

ExpressionElementTableau::ExpressionElementTableau( int indice, string nom) {
    this->setTypeExpression(TypeExpression::elementTableau);
    this->nom = nom;
    this-> indice = indice;
}

string ExpressionElementTableau::getNom() {
    return this->nom;
}


int ExpressionElementTableau::getIndice() {
    return this->indice;
}

string ExpressionElementTableau::toString() {
    return "ExpressionElementTableau ( Nom : " +nom + ", Indice : "+ to_string(indice) + " )";
}

void ExpressionElementTableau::resolutionPorteeVariable(string idContexte, vector<string> *pileVar,
                                                        vector<string> *pileFonct,
                                                        map<string, Declaration *> *varMap) {

}