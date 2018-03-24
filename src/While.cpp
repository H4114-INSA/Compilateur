//
// Created by thomas on 15/03/18.
//

#include "While.h"

While::While(Expression* conditionExec, BlocControle *bloc) {
    this->setCondition(conditionExec);
    this->bloc=bloc;
}

While::~While(){
    delete(bloc);
}

BlocControle* While::getBloc() {
    return this->bloc;
}

void While::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                     map<string, Declaration *> *varMap) {
    this->getCondition()->resolutionPorteeVariable(idContexte,pileVar, pileFonct, varMap);

    bloc->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap);
}

string While::toString() {
    string res = "While |";
    res +=" condition (" + this->getCondition()->toString() + ") ";
    res += bloc->toString();
    return res;
}
