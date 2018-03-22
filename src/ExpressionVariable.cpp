//
// Created by thomas on 15/03/18.
//

#include "ExpressionVariable.h"


ExpressionVariable::ExpressionVariable(string anom) {
    this->setTypeExpression(TypeExpression::variable);
    this->nom=anom;
}

ExpressionVariable::~ExpressionVariable() {

}

string ExpressionVariable::getNom() {
    return this->getNom();
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
            this->nom=(*it);
            map<string, Declaration *>::iterator varDec = varMap->find(*it);
            if(varDec != varMap->end()) {
                //this->type = (varDec->second)->getType();
            }
        }
        it++;
    }

    if(trouve == 0){
        cerr << "Aucune variable de nom n'a été déclarée : " << this->nom <<endl;
        exit(2);
    }
}

void ExpressionVariable::setNom(string nom) {
    this->nom=nom;
}

string ExpressionVariable::toString() {
    return "ExpressionVariable ( Nom : " + nom +" )";
}
