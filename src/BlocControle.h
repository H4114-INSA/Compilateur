//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_BLOCCONTROLE_H
#define COMPILATEUR_BLOCCONTROLE_H

#include <vector>
#include "Instruction.h"
#include "Declaration.h"

using namespace std;

class BlocControle {
public:
    BlocControle(vector<Instruction*> aliste);
    ~BlocControle();

    vector<Instruction*> getListeInstruction();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap);

    string toString();

private:
    vector<Instruction*> listeInstructions;
};


#endif //COMPILATEUR_BLOCCONTROLE_H
