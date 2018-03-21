//
// Created by thomas on 15/03/18.
//

#include "Declaration.h"

Declaration::Declaration(string atype, string nom, int tabSize , Expression* expr ) {
    this-> type = atype;
    this-> nom = nom;
    this-> tabSize = tabSize;
    this->valeur = expr;
}

std::string Declaration::toString() {
    return "Declaration - Type " + type + " - Nom " + nom;
}

string Declaration::getType() {
    return this->type;
}

void Declaration::setType(string type){
    this->type=type;
}

string Declaration::getNom() {
    return this-> nom;
}

void Declaration::setNom(string nom) {
    this->nom=nom;
}