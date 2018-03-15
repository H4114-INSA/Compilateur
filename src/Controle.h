//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_CONTROLE_H
#define COMPILATEUR_CONTROLE_H

#include "Instruction.h"
#include "Expression.h"

class Controle {
public:
    Controle();
    ~Controle();

    void setCondition(Expression* expr);

private:
    Expression* conditionExecution;
};


#endif //COMPILATEUR_CONTROLE_H
