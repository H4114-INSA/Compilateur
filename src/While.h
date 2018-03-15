//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_WHILE_H
#define COMPILATEUR_WHILE_H

#include "Controle.h"
#include "BlocControle.h"

class While : public Controle {
public:
    While(Expression* conditionExec, BlocControle* bloc);
    ~While();

    BlocControle* getBloc();
private:
    BlocControle* bloc;
};


#endif //COMPILATEUR_WHILE_H
