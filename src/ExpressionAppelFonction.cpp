#include "ExpressionAppelFonction.h"

ExpressionAppelFonction::ExpressionAppelFonction(string nomFonction, vector<Declaration*> liste) {
	this->nomFonction = nomFonction;
	this->parametres = liste;
}

vector<Declaration*> ExpressionAppelFonction::getParametres() {
	return this->parametres;
}

string ExpressionAppelFonction::getNom() {
	return this->nomFonction;
}

void ExpressionAppelFonction::setNom(string nom) {
	this->nomFonction=nom;
}