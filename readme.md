# Plan du ReadMe
  
  1. Organisation du dossier
  2. Instructions pour compiler
  3. Ce qui fonctionne 
  4. Ce qui n'est pas implémenté
  5. Bugs

___________________________________________________________________________
# Organisation des fichiers

## Compilateur

  * output (contient les scripts et les fichiers générés)
  * src (contient le code source du projet)
  * testBackEnd (contient les tests liés au back end)
  * testFrontEnd

__________________________________________________________________________

# Instructions pour compiler notre compilateur : (c'est assez récursif comme approche !)

 * modifier le makefile pour y ajouter vos propres chemins vers tous ce qu'il vous faut pour utiliser antlr4.7.1

exemple : 
`java -jar <path_to_antlr.jar>/antlr-4.7.1-complete.jar  -visitor -Dlanguage=Cpp Expr.g4`
`g++ -g -std=c++11 -Wno-attributes -o exe -I <path_to_antlr_runtime>/antlr4-runtime *.cpp  <path_to_antlr_runtime.a>/libantlr4-runtime.a`

 * se placer dans le dossier src et lancer la commande make

 * pour lancer les tests liés au back end et tester le compilateur avec des fichiers c : 
    * écrire un fichier c et le placer dans le dossier testBackEnd
    
    * un script permet de lancer la génération du fichier assembleur (run_test.sh) et se trouve dans le dossier output 
exemple d'utilisation : 

Se placer dans le dossier output et lancer une des 2 commandes ci-desous :

Utilisation (1) : `sh run_test.sh`

Cette commande va parcourir tous les fichiers c présents dans le dossier testBackEnd, lancer le programme afin de générer un fichier assembleur, créer un fichier .o à partir de ce fichier assembleur et enfin compiler à partir du fichier .o généré pour générer un exécutable. 
Dans la console, l'utilisateur verra un compte rendu de l'exécution de chaque fichier c qui affichera pour chacun le contenu du fichier à analyser, des erreurs et warnings s'il y en a, le détail du fichier assembleur généré ainsi que le détail de l'éxécutable généré. 

Utilisation (2) : `sh run_test.sh <nom_fichier_test_sans_extension>`

(exemple : si le fichier s'appelle 00-declarations.c il faudra taper la commande sh run_test.sh 00-declarations)

Cette commande va exécuter le test spécifié en argument et qui se trouve dans le dossier testBackEnd, lancer le programme afin de générer un fichier assembleur, créer un fichier .o à partir de ce fichier assembleur et enfin compiler à partir du fichier .o généré pour générer un exécutable. 
Dans la console, l'utilisateur verra un compte rendu de l'exécution qui affichera le contenu du fichier à analyser, des erreurs et warnings s'il y en a, le détail du fichier assembleur généré ainsi que le détail de l'éxécutable généré.

_________________________________________________________________________________

# Ce qui est implémenté

 * implémentation de toutes les taches jusqu'à 5.10 (compilation des tableaux), ce qui représente :
    * affichage de char dans la console (ex : putchar('O');)
    * prise en compte du caractère spécial '\n'
    * déclaration puis affectation de variables
    * calcul d'expressions arithmétiques complexes
    * implémentation du IF et de ses variantes (if, if else, if elseif else, if elseif elseif ... else, if elseif)
    * implémentation du WHILE
    * imbrication multiple de while
    * imbrication multiple de IF
    * imbrication mixes de IF et de WHILE
    * le retour de fonction est implémenté mais on ne sait pas si ça fonctionne car non testé (on peut voir que le code associé au return est généré dans le fichier assembleur)
    * gestion des erreurs pour les variables utilisées mais non déclarées
    * gestion des erreurs lors de l'incompatibilité de types (ex : si la fonction doit retourner void et que l'expression du return est un int ou un char on indique une erreur)
    * affichage de warning lors de l'analyse du fichier pour indiquer à l'utilisateur qu'il risque d'y avoir des problèmes de perte de précision
    * implémentation des tableaux (déclaration, affectation)
    * gestion d'erreur sur un tableau : l'utilisateur ne peut accéder qu'à un indice compris entre 0 et taille du tableau -1
 * opérateurs implémentés
     < + - *
 
_________________________________________________________________________________

# Ce qui n'est pas (encore) implémenté

 * déclaration + affectation simultanée (ex : int32_t a = 50 ;)
 * impossible d'affecter des nombres négatifs (ex : a = -2 ;)
 * pour les conditions du if et du while nous sommes en mesure de traiter seulement les conditions simples, c'est à dire quand il n'y a pas de conjonction ou de disjonction de clauses
 * Appel de fonction (sauf pour putchar)
 * passage de tableau en paramètres
 * utilisation d'une expression ou d'une variable pour accéder à une case d'un tableau (ex : a[i] avec i une variable qui vaut 0 par exemple )
 
_________________________________________________________________________________

# Bugs

 * problème avec la case 1 du tableau, elle contient la même chose que la case 0 ... origine du bug inconnue à l'heure actuelle