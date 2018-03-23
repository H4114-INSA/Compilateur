//
// Created by thomas on 15/03/18.
//

#include "Declaration.h"

Declaration::Declaration(string atype, string nom, int tabSize , Expression* expr ) {
    this-> type = atype;
    this-> nom = nom;
    this-> tabSize = tabSize;
    this->valeur = expr;
    this->isPtr=false;
}
Declaration::Declaration(string type, string nom, bool isPtr) {
    this->isPtr = true;
    this->type=type;
    this->nom = nom;
    this->tabSize=-1;
    this-> valeur = nullptr;
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

int Declaration::getSize() {
    return this->tabSize;
}
