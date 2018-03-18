//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_FONCTION_H
#define COMPILATEUR_FONCTION_H


#include <string>
#include <vector>
#include "Declaration.h"

using namespace std;

class Fonction {
public:
    Fonction(string nom, TypeVariable typeRetour, vector<Declaration*> arguments);
    ~Fonction();

private:
    std::string nom;
    TypeVariable typeRetour;
    vector<Declaration*> args;
};


#endif //COMPILATEUR_FONCTION_H
