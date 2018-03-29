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

    //
    string gen_asm_prologue();
    string gen_asm_epilogue();

    //variableMap methods
    void add_to_symbol_table(string name, Type t);
    string create_new_tempvar(Type t);
    IRVariable * getVariable(string nomVar);

    /* Permet de calculer l'offset d'une variable par rapport
     * à rbp.
     * La taille d'une case est fix par défaut à 8 peut importe le type de
     * variable que l'on manipule
     */
    string calcul_offset(string nomVar);

    // basic block management
    // méthode qui permet de nommer les BasicBlocks
    string new_BB_name();

    // pointe vers le dernier bloc
    BasicBlock* current_bb;

    // Génère le BB du prologue
    BasicBlock* gen_prologue(string nomFonction);

    // Génère le BB de l'épilogue
    BasicBlock* gen_epilogue();



protected:

    // attribut qui associe le nom d'une variable et son IR
    map <string, IRVariable*> mapVariable;
    int nextFreeSymbolIndex; /**< to allocate new symbols in the symbol table */
    int nextBBnumber; /**< just for naming */
    vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/

private:

    /* Permet d'avoir une table des variable ainsi que leurs index.
     * La valeur retournée est la taille de l'AR qu'il faut allouer */
    int initTableVariable();
    int tailleAR;
    int nbTemp;
};


#endif //COMPILATEUR_CFG_H
