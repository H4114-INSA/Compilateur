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

//'\'' [a-zA-Z0-9]'\'' ;

int main(int , const char ** argv) {
    //ifstream fichier(argv[1], ios::in);
    string contenu;

    int nbLigne =0;
    int code =0;

    cout << "Début de l'analyse" <<endl << endl;
    cout << "Contenu du fichier à analyser :" << endl;
    contenu = lectureFichier(argv[1]);

    ANTLRInputStream input(contenu);
    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    /*tokens.fill();
    string tokenString;
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;

        tokenString+=token->toString();
        tokenString+= "\n";
        nbLigne++;
    }

    code = test(tokenString,nbLigne);*/


    ExprParser parser(&tokens);

    //Add error listener ------------------------
    parser.removeErrorListeners();
    MyParserErrorListener errorListener;
    parser.addErrorListener(&errorListener);
    // ------------------------------------------

    try {
        tree::ParseTree* tree = parser.prog();
        std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

        dotExportGeneration(parser, tree);

        // Code à utiliser une fois que notre visiteur sera implémenté
        Visitor a ;
        Program* program = a.visit(tree);
    }catch (invalid_argument e)
    {
        cout <<"Erreur pendant l'analyse du fichier"<<endl;
        cout << e.what() <<endl <<endl;
        return -2;
    }

    return 0;
}

int test (string &s, int nbLigne) {
    //cout << "tokenString size : " << nbLigne <<endl;
    ifstream stringTest(s, ios::in);
    string line;
    int nombreLigne;

    string delim = "\n";
    std::vector<std::string> ret;
    size_t start = 0;
    size_t end = 0;
    size_t len = 0;
    std::string token;
    do{ end = s.find(delim,start);
        len = end - start;
        token = s.substr(start, len);
        ret.emplace_back( token );
        start += len + delim.length();
        //std::cout << token << std::endl;
    }while ( end != std::string::npos );

    if(ret.at(ret.size()-2).at(0) == '['){
        return 1;
    }else {
        return -1;
    }
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