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
    return this->nom;
}


void ExpressionVariable::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                                  map<string, Declaration *> *varMap) {
    string nomVariableContexte = idContexte+ this->nom;
    int trouve =0;


    vector<string>::reverse_iterator it = pileVar->rbegin();
    while(it != pileVar->rend() && trouve==0){

        // on récupère le nom de le variable
        string nomVariablePile = (*it);
        //int underscorePos = nomVariablePile.find_first_of('_');
        //nomVariablePile = nomVariablePile.substr (underscorePos+1);


        //if(nomVariablePile == this->nom){
        if(nomVariablePile == nomVariableContexte || nomVariablePile == ("global_" +this->nom)){
            trouve++;
            if(nomVariablePile == ("global_" +this->nom)){
                cout << "Warning : la variable '" + this->nom + "' utilisée lors de l'appel à la fonction " + idContexte +
                        " est une variable globale." <<endl;
            }
            map<string, Declaration *>::iterator varDec = varMap->find(*it);
            if(varDec != varMap->end()) {
                //this->type = (varDec->second)->getType();
            }
        }
        it++;
    }

    if(trouve == 0){
        cerr << "Une variable est utilisée dans le contexte de la fonction " + idContexte + " mais n'a jamais été déclaré : " << this->nom <<endl;
        cerr << "Arrêt de l'exécution." <<endl;
        exit(2);
    }
}

void ExpressionVariable::setNom(string nom) {
    this->nom=nom;
}

string ExpressionVariable::toString() {
    return "ExpressionVariable ( Nom : " + nom +" )";
}
