//
// Created by thomas on 15/03/18.
//

#include "While.h"

While::While(Expression* conditionExec, BlocControle *bloc) {
    this->setCondition(conditionExec);
    this->bloc=bloc;
}

While::~While(){
    delete(bloc);
}

BlocControle* While::getBloc() {
    return this->bloc;
}