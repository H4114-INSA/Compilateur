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
    Expression* test = successionIf.at(0)->getCondition();


    //BasicBlock* testBB = cfg->current_bb;
    BasicBlock* testBB = new BasicBlock(cfg);
    cfg->getAllBasicBlocks().at(cfg->getAllBasicBlocks().size()-1)->exit_false = testBB;
    cfg->current_bb = testBB;
    string nomVariableConditionTest = test->buildIR(cfg); // les instructions seront ajoutées à current_bloc

    cfg->current_bb->condition = nomVariableConditionTest;
    cfg->add_bb(testBB);

    //BasicBlock* thenBB =  new BasicBlock(cfg, this->getSuccession().at(0)); // true code
    BasicBlock* thenBB = new BasicBlock(cfg);
    cfg->current_bb = thenBB;
    cfg->current_bb->add_IRInstrFromList(this->getSuccession().at(0)->getBloc()->getListeInstruction());
    cfg->add_bb(thenBB);

    testBB->exit_true=thenBB;

    // construction of what we have to consider for the false code
    BasicBlock* elseBB;
    if(this->getSuccession().size()-1>1){ // si il reste plus d'un if à traiter
        vector<If*> elsePart (this->successionIf.begin()+1, this->successionIf.end());
        IfElseifElse* condStructElsePart = new IfElseifElse(elsePart);
        elseBB = new BasicBlock(cfg, condStructElsePart);
    } else if(this->getSuccession().size()-1 ==1){ // si il reste exactement un "IF" à traiter ça peut être un else if ou un else
        cout<< "ici" << endl;
        if(this->getSuccession().at(1)->getCondition() == nullptr){
            elseBB = new BasicBlock(cfg);
            cfg->current_bb = elseBB;
            cfg->current_bb->add_IRInstrFromList(this->getSuccession().at(1)->getBloc()->getListeInstruction());
            cfg->add_bb(elseBB);
            testBB->exit_false = elseBB;
        } else { // on est en présence d'un else if

        }

    }
    else { // cas où il n'y a qu'un seul if

    }


    BasicBlock* afterIfBB = new BasicBlock(cfg);

    // gestion des pointeurs
    afterIfBB->exit_true = testBB->exit_true;
    afterIfBB->exit_false = testBB->exit_false;


    thenBB->exit_true = nullptr;
    thenBB->exit_false = afterIfBB; //unconditional exit

    elseBB->exit_true = nullptr;
    elseBB->exit_false = afterIfBB; // unconditional exit

    cfg->current_bb = afterIfBB;
    cfg->add_bb(afterIfBB);

    return res;
}
