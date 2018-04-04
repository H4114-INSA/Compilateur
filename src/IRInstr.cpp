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
			ass += "movq $" + params[1] + ", "+ params[0] + "\r\n";
			break;
        case add:
            ass += "movq %r" +params[1] +", %rax\r\n";
            ass += "addq " + params[0] + "(%rbp), %rax\r\n";
            ass += "movq %rax, "+ params[2]+"(%rbp)\r\n";
            break;
        case wmem:
            ass += "movq " + params[0]+"(%rbp), %rax\r\n";
            ass += "movq " +params[1]+"(%rbp), %r10\r\n";
            ass += "movq %r10, (%rax)\r\n";
            break;
		case ecriture_argument_1 :
			ass += "movq " +  params[1] +", " + params[0] + "\r\n";
			break;
        case copy:
            ass += "movq " + params[0]+"(%rbp) , " + "%rax\r\n";
            ass += "movq %rax, " + params[1]+"(%rbp)\r\n";
            break;
        case operation_binaire_add: // !tmp3 !tmp1 !tmp2 // add !tmp1 and !tmp2 and put it into !tmp3
			ass += "movq " + params[1]+"(%rbp), %rax\r\n";
			ass += "addq " + params[2]+"(%rbp), %rax\r\n";
			ass += "movq %rax, " + params[0]+"(%rbp)\r\n";
            break;
        case operation_binaire_sub:
			ass += "movq " + params[1]+"(%rbp), %rax\r\n";
			ass += "subq " + params[2]+"(%rbp), %rax\r\n";
			ass += "movq %rax, " + params[0]+"(%rbp)\r\n";
            break;
        case operation_binaire_mult:
            ass += "mov " + params[1]+"(%rbp), %ax\r\n";
            ass += "mov " + params[2]+"(%rbp), %bx\r\n";
            ass += "mul %bx\r\n";
            ass += "movq %rax, " + params[0]+"(%rbp)\r\n";
            break;
		case operation_binaire_strictless:
		    ass += "decq " + params[2]+"(%rbp) \r\n";
            ass += "mov " + params[2]+"(%rbp), %eax\r\n";
			ass += "cmp %eax, "+ params[1]+"(%rbp) \r\n";
			break;
		case call:
			ass += "call "+params[1]+"\r\n";
			break;
        /*case leave:
            ass +=  params[0]+"\r\n";
            break;
        case ret:
            ass +=  params[0]+"\r\n";
            break;*/
		case ret:
			ass += "movq " + params[0]+"(%rbp) , " + "%rax\r\n";
			break;
		default:
			break;
		
	}

	return ass;
}

BasicBlock* IRInstr::getBasicBlock() {
	return this->bb;
}