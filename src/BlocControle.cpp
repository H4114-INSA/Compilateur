//
// Created by thomas on 15/03/18.
//

#include "BlocControle.h"
#include "ExpressionUnaire.h"
#include "ExpressionBinaire.h"
#include "ExpressionAppelFonction.h"
#include "ExpressionVariable.h"
#include "ExpressionConstante.h"
#include "Controle.h"
#include "While.h"
#include "If.h"
#include "Return.h"
#include "IfElseifElse.h"

BlocControle::BlocControle() {

}

BlocControle::BlocControle(vector<Instruction *> aliste) {
    this->listeInstructions=aliste;
}

vector<Instruction*> BlocControle::getListeInstruction() {
    return this->listeInstructions;
}

BlocControle::~BlocControle() {
    delete (&listeInstructions);
}

string BlocControle::toString() {
    string res ="BlocControle |";
    for(Instruction* i : listeInstructions){
        res += " " + i->toString();
    }
    return res;
}

void BlocControle::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                            map<string, Declaration *> *varMap)
{
    cout<< "reso portee bloc" <<endl;
    // resolution portée pour les instructions

    vector<Instruction*>::iterator itInstr = listeInstructions.begin();
    while(itInstr != listeInstructions.end())
    {
        if(dynamic_cast<Declaration*>(*itInstr)){
            cerr << "La déclaration de variable n'est autorisée qu'en début de fonction avant toute autres intructions"<<endl;
            cerr << "Arrêt de l'exécution" <<endl;
            exit(5);

        } else if(dynamic_cast<Expression*>(*itInstr) || dynamic_cast<ExpressionUnaire*>(*itInstr) || dynamic_cast<ExpressionBinaire*>(*itInstr)
                  || dynamic_cast<ExpressionConstante*>(*itInstr) || dynamic_cast<ExpressionVariable*>(*itInstr) || dynamic_cast<ExpressionAppelFonction*>(*itInstr)){
            cout <<"Expression" <<endl;
            Expression *e = (Expression*)*itInstr;
            e->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap);
        }else if(dynamic_cast<IfElseifElse*>(*itInstr)){
            cout <<"IFELSEIFELSE" << endl;
            IfElseifElse* structureIf = (IfElseifElse*)(*itInstr);
            cout << structureIf->toString() <<endl;
            structureIf->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap);
        }
        else if(dynamic_cast<Controle*>(*itInstr)){
            Controle* controle = (Controle*)*itInstr;
            controle->resolutionPorteeVariable(idContexte,pileVar, pileFonct,varMap);
        }
        else if(dynamic_cast<Return*>(*itInstr)){
            cout <<"Return" <<endl;
            Return* ret = (Return*)*itInstr;
            ret->getExpression()->resolutionPorteeVariable(idContexte,pileVar,pileFonct, varMap);
        }
        itInstr++;
    }
}
