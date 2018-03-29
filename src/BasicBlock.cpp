#include "BasicBlock.h"


BasicBlock::BasicBlock() {

}

BasicBlock::BasicBlock(CFG* cfg_, string entry_label){
	this->cfg=cfg_;
	this->label=entry_label;
	this->exit_true = nullptr;
	this->exit_false = nullptr;
    this->cfg->new_BB_name();
}

BasicBlock::~BasicBlock() {

}
	
	
string BasicBlock::gen_asm(){
	string ass = "";
	vector<IRInstr*>::iterator itIRInstr = instrs.begin();
	while( itIRInstr != instrs.end()){
		// ajouter l'assembleur des instructions
		ass += (*itIRInstr)->gen_asm();
		itIRInstr++;
	}
	return ass;
}


void BasicBlock::add_IRInstr(IRInstr::Operation op,Type t, vector<string> params){
	instrs.push_back(new IRInstr(this, op, t, params));
}

void BasicBlock::add_IRInstrFromList(vector<Instruction *> instructions) {
    vector<Instruction*>::iterator itInstr = instructions.begin();
    while (itInstr != instructions.end()){
        if(dynamic_cast<ExpressionAppelFonction*>((*itInstr))){
            Expression* e = (Expression*)*itInstr;
            e->buildIR(cfg);
        }
        itInstr++;
    }
}
