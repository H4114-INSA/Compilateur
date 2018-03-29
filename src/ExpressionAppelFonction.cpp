#include "ExpressionAppelFonction.h"


ExpressionAppelFonction::ExpressionAppelFonction() {

}

ExpressionAppelFonction::ExpressionAppelFonction(string nomFonction, vector<Expression*> liste) {
	this->setTypeExpression(TypeExpression::affectation);
	this->nomFonction = nomFonction;
	this->parametres = liste;
}

vector<Expression*> ExpressionAppelFonction::getParametres() {
	return this->parametres;
}

string ExpressionAppelFonction::getNom() {
	return this->nomFonction;
}

void ExpressionAppelFonction::setNom(string nom) {
	this->nomFonction=nom;
}

void ExpressionAppelFonction::resolutionPorteeVariable(string idContexte, vector<string> *pileVar,
												   vector<string> *pileFonct, map<string, Declaration *> *varMap, map<string,Fonction*>* fonctMap) {
	int trouveFonction=0;

	// on cherche la fonction dans la pile fonction
	vector<string>::iterator it = pileFonct->begin();
	while ( it != pileFonct->end() && trouveFonction ==0) {
		if((*it) == this->nomFonction){
			trouveFonction=1;
		}
		it++;
	}

	if(trouveFonction == 0 ) {
		cerr << "Une fonction est apelée dans le contexte de la fonction " + idContexte+ " mais n'a jamais été définie : " << this->nomFonction << endl;
		cerr << "Arrêt de l'exécution" <<endl;
		exit(4);
	} else if(trouveFonction == 1 ) {
	    // on exécute une vérification de la portée des paramètres données
        vector<Expression*>::iterator itArgs = parametres.begin();
        while(itArgs != parametres.end())
        {
            (*itArgs)->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap, fonctMap);
            itArgs++;
        }
	}
}

string ExpressionAppelFonction::toString() {
	string res =  "ExpressionAppelFonction ( Nom : " + nomFonction + ", Arguments : ";
	for (int i = 0; i < parametres.size(); i++) {
		res += parametres.at(i)->toString() + ", ";
	}
	res += " ) ";
	return res;
}

string ExpressionAppelFonction::typageExpression(string idContexte,map<string, Declaration *> *varMap, map<string, Fonction *> *fonctMap) {
	map<string,Fonction*>::iterator fonction = fonctMap->find(nomFonction);

	if( fonction != fonctMap->end())
	{
		this->setTypeRetourExpression((*fonction).second->getTypeRetour());
		return (*fonction).second->getTypeRetour();
	}
	return "erreur";
}

string ExpressionAppelFonction::buildIR(CFG* cfg){
    string res = "";
	if(nomFonction=="putchar"){
		Expression* argument = (*parametres.begin());
		string nomVar = argument->buildIR(cfg);

		Type t;
		if(this->getTypeRetour() == "char"){ t = Type::Char;}
		else if(this->getTypeRetour() == "int32_t") {t = Type::Int32_t;}
		else if(this->getTypeRetour() == "int64_t") {t= Type::Int64_t;}
		else if (this->getTypeRetour() == "void") {t= Type::Void;}

		vector<string> paramArgument;
		paramArgument.push_back("%rdi");
		paramArgument.push_back(cfg->calcul_offset(nomVar)+"(%rbp)"); // offset with respect to rbp

		cfg->current_bb->add_IRInstr(IRInstr::Operation::ecriture_argument_1,t,paramArgument);

		vector<string> paramCall;
		paramCall.push_back(""); // dest adress
		paramCall.push_back("putchar"); // label
		cfg->current_bb->add_IRInstr(IRInstr::Operation::call,t,paramCall);
	}
	return res;
}