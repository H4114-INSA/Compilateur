//
// Created by thomas on 15/03/18.
//

#include "Fonction.h"


Fonction::Fonction(string nom, TypeVariable typeRetour, vector<Declaration *> arguments) {
    this->nom = nom;
    this-> typeRetour=typeRetour;
    this->args = arguments;
}

Fonction::~Fonction() {
    delete (args);
}