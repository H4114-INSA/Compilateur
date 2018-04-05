# Plan du ReadMe
  
  1. Organisation du dossier
  2. Instructions pour compiler
  3. Ce qui fonctionne 
  4. Ce qui n'est pas implémenté 

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

Utilisation (1) : > sh run_test.sh

Cette commande va parcourir tous les fichiers c présents dans le dossier testBackEnd, lancer le programme afin de générer un fichier assembleur, créer un fichier .o à partir de ce fichier assembleur et enfin compiler à partir du fichier .o généré pour générer un exécutable. 
Dans la console, l'utilisateur verra un compte rendu de l'exécution de chaque fichier c qui affichera pour chacun le contenu du fichier à analyser, des erreurs et warnings s'il y en a, le détail du fichier assembleur généré ainsi que le détail de l'éxécutable généré. 

Utilisation (2) : > sh run_test.sh <nom_fichier_test_sans_extension>

(exemple : si le fichier s'appelle 00-declarations.c il faudra taper la commande sh run_test.sh 00-declarations)

Cette commande va exécuter le test spécifié en argument et qui se trouve dans le dossier testBackEnd, lancer le programme afin de générer un fichier assembleur, créer un fichier .o à partir de ce fichier assembleur et enfin compiler à partir du fichier .o généré pour générer un exécutable. 
Dans la console, l'utilisateur verra un compte rendu de l'exécution qui affichera le contenu du fichier à analyser, des erreurs et warnings s'il y en a, le détail du fichier assembleur généré ainsi que le détail de l'éxécutable généré.

_________________________________________________________________________________

# Ce qui fonctionne

 * implémentation de toutes les taches jusqu'à 5.10 (compilation des tableaux)
 
_________________________________________________________________________________

# Ce qui n'est pas implémenté

 * déclaration + affectation (ex : int32_t a = 50 ;)
 * impossible d'affecter des nombres négatifs (ex : a = -2 ;)
 * pour les conditions du if et du while nous sommes en mesure de traiter seulement les conditions simples, c'est à dire qu'il n'y a pas de conjonction ou de disjonction de clauses
 * Seul l'opérateur de comparaison strict. inférieur est implémenté 
 * Appel de fonction (sauf pour putchar)
 
