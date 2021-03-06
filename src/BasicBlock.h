//
// Created by thomas on 26/03/18.
//

#ifndef COMPILATEUR_BASICBLOCK_H
#define COMPILATEUR_BASICBLOCK_H

#pragma once


/**  The class for a basic block */

#include "IRInstr.h"
#include "Instruction.h"
#include "Declaration.h"
#include "ExpressionAppelFonction.h"


/* A few important comments.
	 IRInstr has no jump instructions:
	 assembly jumps are generated as follows in BasicBlock::gen_asm():
     1/ a cmp_* comparison instructions, if it is the last instruction of its block,
       generates an actual assembly comparison followed by a conditional jump to the exit_false branch
			 If it is not the last instruction of its block, it behaves as an arithmetic two-operand instruction (add or mult)
		 2/ BasicBlock::gen_asm() first calls IRInstr::gen_asm() on all its instructions, and then
		    if  exit_true  is a  nullptr, it generates the epilogue
				if  exit_false is not a nullptr, and the last instruction is not a cmp, it generates two conditional branches based on the value of the last variable assigned
        otherwise it generates an unconditional jmp to the exit_true branch
*/

class IfElseifElse;
class If;

class BasicBlock {
public:
    BasicBlock();
    ~BasicBlock();
    BasicBlock(CFG* cfg, string entry_label);

    // we use it when we want to create a BB given a certain list of IfElseifElse
    // exemple : the true & false code of a conditional structure
    BasicBlock(CFG* cfg, IfElseifElse* condStruct);

    BasicBlock(CFG* cfg, If* ifStatement);

    BasicBlock(CFG* cfg, Expression* expr);

    BasicBlock(CFG* cfg);


    string gen_asm(); /**< x86 assembly code generation for this basic block (very simple) */

    void add_IRInstr(IRInstr::Operation op,Type t, vector<string> params);
    void add_IRInstrFromList(vector<Instruction*> instructions);

    // No encapsulation whatsoever here. Feel free to do better.
    BasicBlock* exit_true;  /**< pointer to the next basic block, true branch. If nullptr, return from procedure */
    BasicBlock* exit_false; /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
    string label; /**< label of the BB, also will be the label in the generated code */
    CFG* cfg; /** < the CFG where this block belongs */
    vector<IRInstr*> instrs; /** < the instructions themselves. */
    string condition;

private:
    void generateIRFromList(vector<Instruction*> instructions);

};
#endif //COMPILATEUR_BASICBLOCK_H
