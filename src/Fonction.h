//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_FONCTION_H
#define COMPILATEUR_FONCTION_H


#include <string>
#include <vector>
#include <map>
#include "Declaration.h"
#include "ExpressionUnaire.h"

using namespace std;

class Fonction {
public:
    Fonction(string nom, TypeVariable typeRetour, vector<Declaration*> arguments, vector<Instruction*> instructions);
    ~Fonction();

    string getNom();
    vector<Declaration*> getArguments();
    TypeVariable getTypeRetour();

    void resolutionPorteeVariable(vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap);

private:
    std::string nom;
    TypeVariable typeRetour;
    vector<Declaration*> args;

    vector<Instruction*> instructions;
};


#endif //COMPILATEUR_FONCTION_H
