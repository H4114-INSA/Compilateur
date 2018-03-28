#include "CFG.h"

CFG::CFG() {

}

CFG::CFG(Fonction* ast_){
	this->ast = ast_;

	BasicBlock* bbPrologue = gen_prologue(this->ast->getNom());
	this->add_bb(bbPrologue);

	//créer tous les autres blocs
    //
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

    res += this->gen_asm_prologue();

	// generation assembleur pour les BasicBlocs
	vector<BasicBlock*>::iterator itBlock = bbs.begin();
	while( itBlock	!= bbs.end()){
		res += (*itBlock)->gen_asm();
		itBlock++;
	}

	res += this->gen_asm_epilogue();

    return res;
}
		
	string CFG::IR_reg_to_asm(string reg){
		
    }
		
	string CFG::gen_asm_prologue(){
		// The entry block is the one with the same label as the AST function name.

		string ass="";

		vector<string> pushq; pushq.push_back("pushq"); pushq.push_back("%rbp");
		vector<string> movq ; movq.push_back("movq")  ; movq.push_back("%rsp"); movq.push_back("%rbp");
		vector<string> subq ; subq.push_back("subq"); subq.push_back("$" + to_string(tailleAR)); subq.push_back("%rsp");

		ass += pushq[0] + " " + pushq[1] + "\r\n";
		ass += movq[0] + " " + movq[1] + ", " + movq[2] + "\r\n";
		ass += subq[0] + " " + subq[1] + ", " + subq[2] + "\r\n";

		return ass;
    }
		
	string CFG::gen_asm_epilogue(){
		string ass = "";

		vector<string> leave; leave.push_back("leave");
		vector<string> ret;   ret.push_back("ret");

		ass += leave[0] + "\r\n";
		ass += ret[0] + "\r\n";

		return ass;
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
	int nbDecInstr=0; // pour prendre en compte les paramètres passés en arguments
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
	BasicBlock* bbPrologue = new BasicBlock(this,nomFonction);

	this->tailleAR = this->initTableVariable()+8;

	return bbPrologue;
}

BasicBlock *CFG::gen_epilogue() {
	BasicBlock* bbEpilogue = new BasicBlock(this, "epilogue");

	bbEpilogue->exit_false = nullptr;

	return bbEpilogue;
}

