#include "CFG.h"

CFG::CFG() {

}

CFG::CFG(Fonction* ast_){
	this->ast = ast_;

	BasicBlock* bbPrologue = gen_prologue(this->ast->getNom());
	this->add_bb(bbPrologue);

	//créer tous les autres blocs
    //BasicBlock* bbBody = new BasicBloc(this,this->ast->getInstructions(),this->ast->getNom()+"_body");
    ///
	BasicBlock* bbEpilogue;
	if(bbPrologue->exit_true == nullptr){
		bbEpilogue = gen_epilogue();
        this->add_bb(bbEpilogue);
    }


}

void CFG::add_bb(BasicBlock* bb_){
	bbs.push_back(bb_);
	nextBBnumber++;
}
	
string CFG::gen_asm(){
    string res = ".global " + ast->getNom() +"\r\n";
    res +=  ast->getNom() +":\r\n";

	// generation assembleur pour les BasicBlocs
	vector<BasicBlock*>::iterator itBlock = bbs.begin();
	while( itBlock	!= bbs.end()){
		res += (*itBlock)->gen_asm();
		itBlock++;
	}

    return res;
}
		
	string CFG::IR_reg_to_asm(string reg){
		
    }
		
	void CFG::gen_asm_prologue(ostream& o){
		
    }
		
	void CFG::gen_asm_epilogue(ostream& o){
		
    }
		

	// symbol table methods
	void CFG::add_to_symbol_table(string name, Type t){
		
		}
		
	string CFG::create_new_tempvar(Type t){
		
		}
		
	int CFG::get_var_index(string name){
		
		}
		
	Type CFG::get_var_type(string name){
		
		}
		

	// basic block management
	string CFG::new_BB_name(){
		
		}

int CFG::initTableVariable() {
	// taille de  octets pour chaque paramètres
	int offset = 8;
	int tailleAR = 0;

	vector<Instruction*> instr = ast->getInstructions();
	vector<Instruction*>::iterator i = instr.begin();

	// parcours des instructions pour trouver le nombre de déclarations
	int nbDecInstr=mapVariable.size(); // pour prendre en compte les paramètres passés en arguments
	int finDec =0;
	while(i != instr.end() && finDec==0)
	{
		if(dynamic_cast<Declaration*>((*i))){
			Declaration* d= (Declaration*)*i;
			Type type;

			if(d->getType() == "int32_t"){ type=Type::Int32_t;}
			else if(d->getType() == "int64_t") {type = Type::Int64_t;}
			else if (d->getType() == "char"){type = Type::Char;}

			IRVariable* var;
			if( d->getSize() > 0){
				var = new IRVariable(d->getNom(),type, nbDecInstr+1, d->getSize());
			} else {
				var = new IRVariable(d->getNom(),type, nbDecInstr+1);
			}
			this->mapVariable.insert(pair<string, IRVariable*>(d->getNom(), var));

			tailleAR += offset*var->getTaille();
			nbDecInstr++;
		} else {
			finDec++;
		}
		i++;
	}

	map<string, IRVariable*>::iterator j = mapVariable.begin();
	while(j != mapVariable.end()){
		cout << (*j).second->toString() <<endl;
		j++;
	}
	//tailleAR= offset*nbDecInstr;
	return tailleAR;
}

BasicBlock * CFG::gen_prologue(string nomFonction) {

	// calcul de la taille de l'AR et insertion des variables dans notre
	int tailleAR = this->initTableVariable()+8;

	BasicBlock* bbPrologue = new BasicBlock(this,nomFonction); // The entry block is the one with the same label as the AST function name.
	vector<vector<string>> IRprologue;
	vector<string> pushq; pushq.push_back("pushq"); pushq.push_back("%rbp");
	vector<string> movq ; movq.push_back("movq")  ; movq.push_back("%rsp"); movq.push_back("%rbp");
	vector<string> addq ; addq.push_back("addq"); addq.push_back("$" + to_string(tailleAR)); addq.push_back("%rsp");

	IRprologue.push_back(pushq);
	IRprologue.push_back(movq);
	IRprologue.push_back(addq);

	bbPrologue->add_IRInstr(IRInstr::Operation::pushq,Type::Asm,IRprologue.at(0));
	bbPrologue->add_IRInstr(IRInstr::Operation::movq,Type::Asm,IRprologue.at(1));
	bbPrologue->add_IRInstr(IRInstr::Operation::addq,Type::Asm,IRprologue.at(2));

	return bbPrologue;
}

BasicBlock *CFG::gen_epilogue() {
	BasicBlock* bbEpilogue = new BasicBlock(this, "epilogue");
	vector<vector<string>>IREpilogue;

	vector<string> leave; leave.push_back("leave");
	vector<string> ret;   ret.push_back("ret");

	IREpilogue.push_back(leave);
	IREpilogue.push_back(ret);

	bbEpilogue->add_IRInstr(IRInstr::Operation::leave, Type::Asm, IREpilogue.at(0));
	bbEpilogue->add_IRInstr(IRInstr::Operation::ret,Type::Asm, IREpilogue.at(1));

	bbEpilogue->exit_false = nullptr;

	return bbEpilogue;
}

