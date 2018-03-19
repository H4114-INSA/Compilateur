//
// Created by thomas on 15/03/18.
//

#include "BlocControle.h"


BlocControle::BlocControle(vector<Instruction *> aliste) {
    this->listeInstructions=aliste;
}

vector<Instruction*> BlocControle::getListeInstruction() {
    return this->listeInstructions;
}

BlocControle::~BlocControle() {
    delete (&listeInstructions);
}

void BlocControle::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                            map<string, Declaration *> *varMap) {

}