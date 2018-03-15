//
// Created by thomas on 15/03/18.
//

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

    map<string, Fonction*> getFonctions();
    map<string, Declaration*> getVariables();

    void ajouterFonction(string nomFonction, Fonction * fonction);
private:
    vector<Fonction*> fonction;

    map<string,Declaration*> mapVariable;
    map<string, Fonction*> mapFonction;
};


#endif //COMPILATEUR_PROGRAM_H
