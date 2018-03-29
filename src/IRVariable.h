//
// Created by thomas on 27/03/18.
//

#pragma  once

#ifndef COMPILATEUR_IRVARIABLE_H
#define COMPILATEUR_IRVARIABLE_H


#include "IRInstr.h"

class IRVariable {
public:
    IRVariable();
    IRVariable(string nom, Type type, int index, int taille=1);

    ~IRVariable();

    int getIndex() ;

    int getTaille() ;

    string getNom() ;

    Type getType() ;

    void setType(Type type);

    void setIndex(int index);

    void setTaille(int taille);

    void setNom(string nom);

    string toString();

private:
    Type type;
    int index;
    int taille; //pour la gestion des variables tableau
    string nom;

};


#endif //COMPILATEUR_IRVARIABLE_H
