//
// Created by thomas on 26/03/18.
//

#ifndef COMPILATEUR_CFG_H
#define COMPILATEUR_CFG_H

#pragma once

#include "Fonction.h"
#include "BasicBlock.h"
#include "IRVariable.h"

#include <sstream>


/** The class for the control flow graph, also includes the symbol table */

/* A few important comments:
	 The entry block is the one with the same label as the AST function name.
	   (it could be the first of bbs, or it could be defined by an attribute value)
	 The exit block is the one with both exit pointers equal to nullptr.
     (again it could be identified in a more explicit way)

 */
using namespace std;

class CFG {
public:
    CFG();
    CFG(Fonction* ast);

    Fonction * ast; /**< The AST this CFG comes from */

    void add_bb(BasicBlock* bb);

    // x86 code generation: could be encapsulated in a processor class in a retargetable compiler
    string gen_asm();
    string IR_reg_to_asm(string reg); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */
    string gen_asm_prologue();
    string gen_asm_epilogue();

    // symbol table methods
    void add_to_symbol_table(string name, Type t);
    string create_new_tempvar(Type t);
    int get_var_index(string name);
    Type get_var_type(string name);

    // basic block management
    string new_BB_name();
    BasicBlock* current_bb;

    BasicBlock* gen_prologue(string nomFonction);
    BasicBlock* gen_epilogue();



protected:
    // les 2 lignes qui suivent sont remplacées par mapVariable
    //map <string, Type> mapVariableType; /**< part of the symbol table  */
    //map <string, int> mapVariableIndex; /**< part of the symbol table  */

    map <string, IRVariable*> mapVariable;
    int nextFreeSymbolIndex; /**< to allocate new symbols in the symbol table */
    int nextBBnumber; /**< just for naming */
    vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/

private:

    /* Permet d'avoir une table des variable ainsi que leurs index.
     * La valeur retournée est la taille de l'AR qu'il faut allouer */
    int initTableVariable();
    int tailleAR;
};


#endif //COMPILATEUR_CFG_H
