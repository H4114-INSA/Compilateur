//
// Created by thomas on 15/03/18.
//

#include "Declaration.h"

Declaration::Declaration(TypeVariable atype, string nom, int tabSize , Expression* expr ) {
    this-> type = atype;
    this-> nom = nom;
    this-> tabSize = tabSize;
    this->valeur = expr;
}

std::string Declaration::toString() {
    return "Declaration - toString()";
}

TypeVariable Declaration::getType() {
    return this->type;
}

string Declaration::getNom() {
    return this-> nom;
}

void Declaration::setNom(string nom) {
    this->nom=nom;
}