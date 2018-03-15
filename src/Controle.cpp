//
// Created by thomas on 15/03/18.
//

#include "Controle.h"


Controle::Controle() {}

Controle::~Controle() {}

void Controle::setCondition(Expression *expr) {
    this->conditionExecution=expr;
}