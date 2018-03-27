#include "BasicBlock.h"


BasicBlock::BasicBlock() {

}

BasicBlock::BasicBlock(CFG* cfg_, string entry_label){
	this->cfg=cfg_;
	this->label=entry_label;
	this->exit_true = nullptr;
}

BasicBlock::BasicBlock(CFG* cfg, vector<Instruction*> instructions ,string entry_label){
    this->cfg=cfg;

    vector<Instruction*>::iterator itInstr = instructions.begin();
    while (itInstr != instructions.end()){
        if(dynamic_cast<Declaration*>((*itInstr))){

        }
        itInstr++;
    }
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


