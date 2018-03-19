//
// Created by thomas on 19/03/18.
//

#include "Variable.h"

Variable::Variable(string nomVar) {
    this-> nomVariable = nomVar;
}

Variable::~Variable() {}

string Variable::getNom() {
    return this->nomVariable;
}

void Variable::setNom(string nomVar) {
    this->nomVariable=nomVar;
}