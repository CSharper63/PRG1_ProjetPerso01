/* ---------------------------
Laboratoire : projet tableau
Fichier :
Auteur(s) : Maxime Chantemargue
Date :
But :
Veuillez créer un projet unique, utilisant la compilation séparée, qui implémente et démontre les fonctionnalités des exercices 5.4 (affichage), 5.7 (remplacement), 5.8 (décalage cyclique), 5.12 (suppression d'une valeur) et 5.14 (égalité ensembliste).
Le projet comprendra un fichier main.cpp, puis un fichier .cpp et un en-tête .h par fonction (exercice).  Ces entêtes seront très bref, et feront l'objet d'un #include dans main.cpp.  Le bloc main() contiendra tous les tests montrant le bon fonctionnement des fonctions.
Vous créerez au moins 5 tableaux d'au moins 10 entiers dans le main(), auxquels vous appliquerez les fonctions, en affichant les tableaux avant et après chaque appel (sauf au 5.14 qui ne les modifie pas).
Vous utiliserez pour chaque tableau une variable-compagnon indiquant sa taille.
N'oubliez pas de tester vos fonctions avec des tableaux vides et d'autres cas particuliers (p.ex. résultat vide au 5.12).
Il sera important d'utiliser des noms informatifs pour les fonctions et les variables , et de commenter brièvement vos fonctions.
Veuillez soumettre ici votre projet, effectué individuellement, avant la date indiquée ci-dessous.
Compilateur :
--------------------------- */

#include <cstdlib>
#include <iostream>

//include des fonctions
#include "displayArray.h"
#include "replacePairByValue.h"
#include "cyclicShift.h"
#include "deleteValueInArray.h"
#include "compareArrays.h"

using namespace std;

int main() {

    int t0[] = {},
        t1[] = {0},
        tabSize0 = sizeof(t0) / sizeof(int),
        tabSize1 = sizeof(t1) / sizeof(int);
    //displayArray(t0, tabSize0);gitk
    //replacePairByValue(t0, tabSize0, 0);
    //cyclicShift(t0, tabSize);
    //deleteTab(t0, tabSize0, 956);
    cout << compareArrays(t0, tabSize0, t1, tabSize1);
    return EXIT_SUCCESS;
}

