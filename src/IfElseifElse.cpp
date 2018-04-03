//
// Created by thomas on 20/03/18.
//

#include "IfElseifElse.h"

IfElseifElse::IfElseifElse() {

}

IfElseifElse::IfElseifElse(vector<If *> successionIf) {
    this->successionIf = successionIf;
}

IfElseifElse::~IfElseifElse() {

}

vector<If *> IfElseifElse::getSuccession() {
    return this->successionIf;
}

void IfElseifElse::setSuccession(vector<If*> successionIf) {
    this->successionIf = successionIf;
}

void IfElseifElse::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                            map<string, Declaration *> *varMap, map<string,Fonction*>* FonctMap) {
    vector<If*>::iterator it = successionIf.begin();
    vector<If*>::iterator end = successionIf.end();
    int i = 0;
    while(it != end){
        (*it)->resolutionPorteeVariable(idContexte, pileVar, pileFonct,varMap,FonctMap);
        it++;
    }

}

string IfElseifElse::toString() {
    string res =  "IfElseifElse | " + to_string(successionIf.size());
    for (int i=0; i<successionIf.size();i++) {
        res += " "  +successionIf.at(i)->toString();

    }
    return res;
}


string IfElseifElse::buildIR(CFG *cfg) {
    string res ="";

    BasicBlock* beforeBB;
    BasicBlock* testBB;
    BasicBlock* thenBB;
    BasicBlock* elseBB;
    BasicBlock* afterBB= new BasicBlock(cfg);

    beforeBB = cfg->current_bb;

    testBB = new BasicBlock(cfg);
    cfg->current_bb = testBB;
    string nomCondition = this->getSuccession().at(0)->getCondition()->buildIR(cfg);
    cfg->current_bb->condition = nomCondition;

    thenBB = new BasicBlock(cfg);
    cfg->current_bb = thenBB;
    testBB->exit_true = thenBB;
    thenBB->exit_true  = afterBB;
    cfg->current_bb->add_IRInstrFromList(this->getSuccession().at(0)->getBloc()->getListeInstruction());


    cfg->add_bb(testBB);
    cfg->add_bb(thenBB);


    if(this->getSuccession().size()-1 == 1){
        if(this->getSuccession().at(1)->getCondition() == nullptr){ // cas du if else
            elseBB = new BasicBlock(cfg);
            cfg->current_bb = elseBB;
            testBB->exit_false = elseBB;
            elseBB->exit_true = afterBB;
            elseBB->add_IRInstrFromList(this->getSuccession().at(1)->getBloc()->getListeInstruction());
            cfg->add_bb(elseBB);
        }
    } else if(this->getSuccession().size() == 1){ // if seul
        testBB->exit_false = afterBB;
    }


    afterBB->exit_true = beforeBB->exit_true; // exit_true du elseBB pointe vers le exit true du précédent bloc
    afterBB->exit_false= beforeBB->exit_false;
    beforeBB->exit_true=testBB; // exit_true du précédent bloc va pointer vers le test
    cfg->add_bb(afterBB);

    cfg->current_bb = afterBB;

    return res;
}
