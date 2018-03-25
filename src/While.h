//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_WHILE_H
#define COMPILATEUR_WHILE_H

#include "Controle.h"
#include "BlocControle.h"

class While : public Controle {
public:
    While(Expression* conditionExec, BlocControle* bloc);
    ~While();

    BlocControle* getBloc();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap, map<string,Fonction*>* fonctMap);

    string toString();
private:
    BlocControle* bloc;
};


#endif //COMPILATEUR_WHILE_H
