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
    this->fonction.push_back(fonction);
}

map<string, Fonction*> Program::getFonctions() {
    return this->mapFonction;
}

map<string, Declaration*> Program::getVariables() {
    return this->mapVariable;
}

void Program::resolutionPorteeVariable() {
    vector<string> pileVariable;
    vector<string> pileFonction;

    vector<Fonction*>::iterator it;
    for(it = fonction.begin(); it != fonction.end(); it++){
        mapFonction.insert ( std::pair<string, Fonction*>((*it)->getNom(),(*it)));
        pileFonction.push_back((*it)->getNom());
        (*it)->resolutionPorteeVariable(&pileVariable, &pileFonction, &mapVariable);
    }
}