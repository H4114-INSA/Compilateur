#include "ExpressionAppelFonction.h"


ExpressionAppelFonction::ExpressionAppelFonction() {

}

ExpressionAppelFonction::ExpressionAppelFonction(string nomFonction, vector<Expression*> liste) {
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
												   vector<string> *pileFonct, map<string, Declaration *> *varMap) {

}

string ExpressionAppelFonction::toString() {
	string res =  "ExpressionAppelFonction ( Nom : " + nomFonction + ", Arguments : ";
	for (int i = 0; i < parametres.size(); i++) {
		res += parametres.at(i)->toString() + ", ";
	}
	res += " ) ";
	return res;
}