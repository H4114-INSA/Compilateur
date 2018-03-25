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