//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_IF_H
#define COMPILATEUR_IF_H


#include "Expression.h"
#include "BlocControle.h"
#include "Controle.h"
#include "CFG.h"

class If : public Controle {
public:
    If();
    If(Expression* conditionExec, BlocControle* bloc);
    ~If();

    BlocControle* getBloc();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap, map<string, Fonction*>* fonctMap);

    string toString();

    string buildIR(CFG *cfg) override;

private:
    BlocControle* bloc;
};


#endif //COMPILATEUR_IF_H
