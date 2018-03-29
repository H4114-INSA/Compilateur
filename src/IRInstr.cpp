#include "IRInstr.h"

IRInstr::IRInstr() {

}

IRInstr::IRInstr(BasicBlock* bb_, Operation op_,Type t_, vector<string> params_){
	bb=bb_;
	op=op_;
	t=t_;
	params=params_;
}

string IRInstr::gen_asm(){
	string ass= "";
	switch(op){
		case pushq:
			ass +=  params[0] + " " + params[1]+"\r\n";
			/*ass + "MOV var,"+params[1];
			ass<<"ADD "+params[1]+","+params[2];
			ass<<"MOV "+params[0]+","+params[1];
			o<<"MOV "+params[1]+", var";*/
			break;
		case movq:
			ass += params[0] + " " + params[1] + ", " + params[2] + "\r\n";
			break;
		case subq:
			ass += params[0] +" " + params[1] + ", " + params[2] + "\r\n";
			break;
		case ldconst:
			ass += "movl $" + params[1] + ", "+ params[0] + "\r\n";
			break;
		case ecriture_argument_1 :
			ass += "mov " +  params[1] +", " + params[0] + "\r\n";
			break;
		case call:
			ass += "call "+params[1]+"\r\n";
			break;
        case leave:
            ass +=  params[0]+"\r\n";
            break;
        case ret:
            ass +=  params[0]+"\r\n";
            break;
		default:
			break;
		
	}

	return ass;
}

BasicBlock* IRInstr::getBasicBlock() {
	return this->bb;
}