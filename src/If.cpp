//
// Created by thomas on 15/03/18.
//

#include "If.h"

If::If() {

}

If::If(Expression *conditionExec, BlocControle *bloc) {
    this->setCondition(conditionExec);
    this->bloc = bloc;
}

If::~If() {
    delete(bloc);
}

BlocControle* If::getBloc() {
    return this->bloc;
}

void If::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                  map<string, Declaration *> *varMap) {
    cout << "Resolution condition if " <<endl;
    this->getCondition()->resolutionPorteeVariable(idContexte,pileVar, pileFonct, varMap);
    cout <<"Résolution bloc if " << endl;
    bloc->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap);
}

string If::toString() {
    string res = "If |";
    res +=" condition (" + this->getCondition()->toString() + ") ";
    res += bloc->toString();
    return res;
}
