//
// Created by thomas on 15/03/18.
//

#include "Program.h"

Program::Program() {

}

Program::~Program() {
    delete(&mapFonction);
    delete(&mapVariable);
}

void Program::ajouterFonction(string nomFonction, Fonction *fonction) {
    mapFonction.insert ( std::pair<string, Fonction*>(nomFonction,fonction));
    this->fonction.push_back(fonction);
}

void Program::ajouterDeclaration(string nomVariable, Declaration *decl) {
    mapVariable.insert ( std::pair<string, Declaration*>(nomVariable,decl));

}

map<string, Fonction*> Program::getFonctions() {
    return this->mapFonction;
}

map<string, Declaration*> Program::getVariables() {
    return this->mapVariable;
}