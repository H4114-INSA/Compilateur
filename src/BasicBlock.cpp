#include "BasicBlock.h"
#include "IfElseifElse.h"


BasicBlock::BasicBlock() {

}

BasicBlock::BasicBlock(CFG *cfg) {
	this->cfg=cfg;
	this->exit_true= nullptr;
	this->exit_false = nullptr;
	this->label = this->cfg->new_BB_name();
	this->condition = "non_init";
}

BasicBlock::BasicBlock(CFG* cfg_, string entry_label){
	this->cfg=cfg_;
	this->label=entry_label;
	this->exit_true = nullptr;
	this->exit_false = nullptr;
    this->cfg->new_BB_name();
    this->condition = "non_init";
}

BasicBlock::BasicBlock(CFG *cfg, IfElseifElse* condStruct) {
    this->cfg=cfg;
    this->exit_true= nullptr;
    this->exit_false = nullptr;
    this->label = this->cfg->new_BB_name();
	condStruct->buildIR(cfg);
	this->condition = "non_init";
}

BasicBlock::BasicBlock(CFG *cfg, If *ifStatement) {
	this->cfg=cfg;
    this->exit_true=nullptr;
    this->exit_false = nullptr;
	this->label=this->cfg->new_BB_name();
	this->condition = "non_init";
	cout << ifStatement->getBloc()->toString() <<endl;
	generateIRFromList(ifStatement->getBloc()->getListeInstruction());
}

BasicBlock::BasicBlock(CFG *cfg, Expression *expr) {

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

    if(exit_false != nullptr) {
        if (exit_true != nullptr && condition != "non_init") {
            string offset = cfg->calcul_offset(condition);

            ass += "jg .L" + exit_false->label + " \r\n";
            ass += "jmp .L" + exit_true->label + " \r\n";
        }

        if(exit_true == nullptr && this->instrs.size() != 0 ){
            ass += "jmp .L"+exit_false->label+" \r\n";
        }
    }

	return ass;
}


void BasicBlock::add_IRInstr(IRInstr::Operation op,Type t, vector<string> params){
	instrs.push_back(new IRInstr(this, op, t, params));
}

void BasicBlock::add_IRInstrFromList(vector<Instruction *> instructions) {
	generateIRFromList(instructions);
}

void BasicBlock::generateIRFromList(vector<Instruction *> instructions) {

	vector<Instruction*>::iterator itInstr = instructions.begin();
	while (itInstr != instructions.end()){
		if(dynamic_cast<Expression*>((*itInstr))){
			Expression* e = (Expression*)*itInstr;
			e->buildIR(cfg);
		}
		else if(dynamic_cast<IfElseifElse*>(*itInstr)){
			IfElseifElse* structIf = (IfElseifElse*)*itInstr;
			structIf->buildIR(cfg);
		}
		itInstr++;
	}
}

