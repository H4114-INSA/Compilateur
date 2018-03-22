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
    Fonction();
    Fonction(string nom, string typeRetour, vector<Declaration*> arguments, vector<Instruction*> instructions);
    ~Fonction();

    string toString();

    string getNom();
    void setNom(string nom);

    vector<Declaration*> getArguments();
    void setArguments(vector<Declaration*> arguments);

    string getTypeRetour();
    void setTypeRetour(string type);

    vector<Instruction*> getInstructions();
    void setInstructions(vector<Instruction*> instr);

    void resolutionPorteeVariable(vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap);

private:
    std::string nom;
    string typeRetour;
    vector<Declaration*> args;

    vector<Instruction*> instructions;
};


#endif //COMPILATEUR_FONCTION_H
