//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_CONTROLE_H
#define COMPILATEUR_CONTROLE_H

#include "Instruction.h"
#include "Expression.h"

class Controle : public Instruction{
public:
    Controle();
    ~Controle();

    Expression* getCondition();
    void setCondition(Expression* expr);
    virtual void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap) =0;

private:
    Expression* conditionExecution;
};


#endif //COMPILATEUR_CONTROLE_H
