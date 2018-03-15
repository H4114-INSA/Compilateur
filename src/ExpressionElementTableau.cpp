//
// Created by thomas on 15/03/18.
//

#include "ExpressionElementTableau.h"

ExpressionElementTableau::ExpressionElementTableau(TypeVariable atype, int indice, string nom) {
    this->setTypeExpression(TypeExpression::elementTableau);
    this->type = atype;
    this->nom = nom;
    this-> indice = indice;
}

string ExpressionElementTableau::getNom() {
    return this->nom;
}

TypeVariable ExpressionElementTableau::getType() {
    return this-> type;
}

int ExpressionElementTableau::getIndice() {
    return this->indice;
}