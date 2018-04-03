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
                                     map<string, Declaration *> *varMap,map<string,Fonction*>* fonctMap) {
    this->getCondition()->resolutionPorteeVariable(idContexte,pileVar, pileFonct, varMap, fonctMap);
    bloc->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap,fonctMap);
}

string While::toString() {
    string res = "While |";
    res +=" condition (" + this->getCondition()->toString() + ") ";
    res += bloc->toString();
    return res;
}

string While::buildIR(CFG *cfg) {
    string res = "";

    // construction testBB
    Expression* test = this->getCondition();
    BasicBlock* testBB = new BasicBlock(cfg);
    cfg->getAllBasicBlocks().at(cfg->getAllBasicBlocks().size()-1)->exit_false = testBB;
    cfg->current_bb = testBB;

    string nomVariableConditionTest = test->buildIR(cfg); // les instructions seront ajoutées à current_bloc
    cfg->current_bb->condition = nomVariableConditionTest;
    cfg->add_bb(testBB);

    // construction thenBB
    BasicBlock* thenBB = new BasicBlock(cfg);
    cfg->current_bb = thenBB;
    cfg->current_bb->add_IRInstrFromList(this->getBloc()->getListeInstruction());
    cfg->add_bb(thenBB);

    testBB->exit_true=thenBB;
    thenBB->exit_false = testBB;

    // contruction elseBB
    BasicBlock* elseBB = new BasicBlock(cfg);
    cfg->current_bb = elseBB;
    cfg->add_bb(elseBB);

    testBB->exit_false = elseBB;

    return res;
}
