//
// Created by thomas on 15/03/18.
//

#include "If.h"

If::If(Expression *conditionExec, BlocControle *bloc) {
    this->setCondition(conditionExec);
    this->bloc = bloc;
}

If::~If() {
    delete(bloc);
}

BlocControle* If::getBloc() {
    return this->bloc;
}