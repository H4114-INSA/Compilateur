
//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_RETURN_H
#define COMPILATEUR_RETURN_H

#include "Expression.h"
#include "CFG.h"

class Return : public Instruction{
public:
    Return();
    Return(Expression* e);
    ~Return();

    Expression* getExpression();

    string toString();

    string buildIR(CFG *cfg) override;

private:
    Expression* expression;
};


#endif //COMPILATEUR_RETURN_H
