//
// Created by thomas on 15/03/18.
//

#include "ExpressionVariable.h"


ExpressionVariable::ExpressionVariable(string anom, TypeVariable atype, Variable* valeur) {
    this->setTypeExpression(TypeExpression::variable);
    this->nom=anom;
    this->type = atype;
    this->variable = valeur;
}

ExpressionVariable::~ExpressionVariable() {

}

Variable* ExpressionVariable::getValeur() {
    return this->variable;
}

string ExpressionVariable::getNom() {
    return this->getNom();
}

TypeVariable ExpressionVariable::getType() {
    return this-> getType();
}

void ExpressionVariable::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                                  map<string, Declaration *> *varMap) {
    string nom = idContexte+ this->nom;
    int trouve =0;


    vector<string>::reverse_iterator it = pileVar->rbegin();
    while(it != pileVar->rend() && trouve==0){

        // on récupère le nom de le variable
        string elementPile = (*it);
        int underscorePos = elementPile.find_first_of('_');
        elementPile = elementPile.substr (underscorePos+1);

        if(elementPile == nom){
            trouve=1;
            this->variable->setNom(*it);
            map<string, Declaration *>::iterator varDec = varMap->find(*it);
            if(varDec != varMap->end()) {
                this->type = (varDec->second)->getType();
            }
        }
        it++;
    }

    if(trouve == 0){
        cerr << "Aucune variable de nom n'a été déclarée : " << this->nom <<endl;
        exit(2);
    }
}