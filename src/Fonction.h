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

private:
    std::string nom;
    int typeRetour;
    vector<Declaration*> args;
};


#endif //COMPILATEUR_FONCTION_H
