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
#include "CFG.h"
#include "IRInstr.h"
#include "BasicBlock.h"

using namespace std;

using namespace antlr4;

int test (string &nomFichier, int );
string lectureFichier(const char * nomFichier);
void dotExportGeneration (ExprParser &parser, tree::ParseTree* tree);



int main(int , const char ** argv) {
    string contenu;

    cout << "Début de l'analyse" <<endl << endl;
    cout << "Contenu du fichier à analyser :" << endl <<endl;
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

        // Génération de l'IR -------------------------------
        cout << "génération de l'ir ..."  <<endl;
        vector<CFG*> listeCFG;
        map<string, Fonction*> mapFonction = program->getMapFonctions();
        map<string,Fonction*>::iterator itFonction = mapFonction.begin();

        while(itFonction != mapFonction.end()){
            listeCFG.push_back(new CFG((*itFonction).second)); // on créé un cfg par fonction
            itFonction++;
        }

        cout << endl << "Generation du code assembleur..." <<endl << endl;
        string assembleur = "";
        vector<CFG*>::iterator itCFG = listeCFG.begin();
        while(itCFG != listeCFG.end()){
            assembleur += (*itCFG)->gen_asm() + "\r\n";
            itCFG++;
        }

        cout << assembleur <<endl;

        ofstream myfile;
        string fileName (argv[1]);
        size_t last_pos = fileName.find_last_of("/\\");
        fileName = fileName.substr(last_pos+1);
        fileName.pop_back();
        fileName.push_back('s');
        myfile.open ("./../output/"+fileName);
        myfile << assembleur;
        myfile.close();


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
            contenuFichier += ligne +"\r\n";
        }
        cout << contenuFichier << endl <<endl;
        fichier.close();
    }
    else {
        cerr << "Impossible d'ouvrir le fichier !\r\n" << endl;
        exit(-3);
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