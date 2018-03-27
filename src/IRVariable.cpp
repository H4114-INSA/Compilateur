//
// Created by thomas on 27/03/18.
//

#include "IRVariable.h"

IRVariable::IRVariable() {

}

IRVariable::IRVariable(string nom, Type type, int index, int taille) {
    this->nom=nom;
    this->type=type;
    this->index = index;
    this->taille=taille;
}

IRVariable::~IRVariable() {

}

Type IRVariable::getType()  {
    return type;
}

int IRVariable::getIndex()  {
    return index;
}

int IRVariable::getTaille()  {
    return taille;
}

string IRVariable::getNom()  {
    return nom;
}

void IRVariable::setType(Type type) {
    IRVariable::type = type;
}

void IRVariable::setIndex(int index) {
    IRVariable::index = index;
}

void IRVariable::setTaille(int taille) {
    IRVariable::taille = taille;
}

void IRVariable::setNom( string nom) {
    IRVariable::nom = nom;
}

string IRVariable::toString() {
    return "IRVariable - Nom : " + nom + " - Type : " + to_string((int)type) + " - Index : " + to_string(index) + " - Taille : " + to_string(taille) ;
}
