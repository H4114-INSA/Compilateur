//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_PROGRAM_H
#define COMPILATEUR_PROGRAM_H

#include <iostream>
#include "Fonction.h"
#include <map>

using namespace std;

class Program {

public:
    Program();
    ~Program();

    void setFonction(vector<Fonction*> fonct);
    void setDeclaration(vector<Declaration*> decl);

    map<string, Fonction*> getMapFonctions();
    map<string, Declaration*> getMapDeclarations();

    map<string, Declaration*> getVariables();

    void ajouterFonction(string nomFonction, Fonction * fonction);
    void ajouterFonction(Fonction* fonction);
    void ajouterDeclaration(Declaration* declaration);

    void resolutionPorteeVariable();
private:
    vector<Fonction*> fonction;
    vector<Declaration*> declaration;

    map<string,Declaration*> mapVariable;
    map<string, Fonction*> mapFonction;
};


#endif //COMPILATEUR_PROGRAM_H
