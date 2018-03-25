//
// Created by thomas on 11/03/18.
//

#include <iostream>
#include <fstream>

#include "antlr4-runtime/antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "dotexport.h"
#include "Visitor.h"
#include "MyParserErrorListener.h"

using namespace std;

using namespace antlr4;

int test (string &nomFichier, int );
string lectureFichier(const char * nomFichier);
void dotExportGeneration (ExprParser &parser, tree::ParseTree* tree);



int main(int , const char ** argv) {
    string contenu;

    cout << "Début de l'analyse" <<endl << endl;
    cout << "Contenu du fichier à analyser :" << endl;
    contenu = lectureFichier(argv[1]);

    ANTLRInputStream input(contenu);
    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);

    //Add error listener ------------------------
    parser.removeErrorListeners();
    MyParserErrorListener errorListener;
    parser.addErrorListener(&errorListener);
    // ------------------------------------------

    try {
        tree::ParseTree* tree = parser.prog();
        //std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

        dotExportGeneration(parser, tree);

        // Visiteur perso
        Visitor a ;
        Program* program = a.visit(tree);

        cout<< endl << "Analyse de la portée des variable et dy typage en cours..." <<endl << endl;
        cout << "Compte rendu d'exécution :" <<endl;
        program->resolutionPorteeVariable();
        cout << "Aucune erreur n'a été détectée." <<endl << endl;
        map<string,Declaration*> mapVariables = program->getVariables();

    }catch (invalid_argument e)
    {
        cout <<"Erreur pendant l'analyse du fichier."<<endl;
        cout << e.what() <<endl <<endl;
        return -2;
    }

    return 0;
}


string lectureFichier(const char * nomFichier)
{
    string ligne;
    string contenuFichier;
    ifstream fichier(nomFichier, ios::in);
    if(fichier)
    {
        while(getline(fichier, ligne))
        {
            contenuFichier += ligne;
        }
        cout << contenuFichier << endl <<endl;
        fichier.close();
    }
    else {
        cerr << "Impossible d'ouvrir le fichier !\r\n" << endl;
    }
    return contenuFichier;
}
void dotExportGeneration (ExprParser &parser, tree::ParseTree* tree)
{
    DotExport dotexport(&parser);
    tree::ParseTreeWalker::DEFAULT.walk(&dotexport, tree);
    ofstream out;
    out.open("tmp.dot");
    out<<dotexport.getDotFile();
    out.close();
    system("dot -Tpdf -o out.pdf tmp.dot");
}