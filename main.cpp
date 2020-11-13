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
#include <map>
//include des fonctions
#include "displayArray.h"
#include "replacePairByValue.h"
#include "cyclicShift.h"
#include "deleteValueInArray.h"
#include "compareArrays.h"

using namespace std;

int main() {

    const int NUMBER_OF_ARRAY = 5,
        VALUE_TO_DELETE = 2,
        VALUE_TO_REPLACE_PAIRS = 187;

    int t0[] = {1, 2, 2, 2, 0, 0, 0, 0},
        t1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
        t2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 14, 14, 14, 14, 14,2,1,3,4,5,6},
        t3[] = {123, 3, 543, 3, 768, 986, 3, 546, 3, 132, 54, 2, 56, 88, 7, 8, 76, 3, 3, 2, 2},
        t4[] = {},
        t5[] = {};
    //map contenant tous les tableaux
    map<int, int (*)> listOfArray{
            {0, t0},
            {1, t1},
            {2, t2},
            {3, t3},
            {4, t4},
    };
    //map contenant la taille de chaque tableau
    map<int, unsigned> listOfSizeArray{
            {0, (sizeof(t0) / sizeof(int))},
            {1, (sizeof(t1) / sizeof(int))},
            {2, (sizeof(t2) / sizeof(int))},
            {3, (sizeof(t3) / sizeof(int))},
            {4, (sizeof(t4) / sizeof(int))},
    };

    for (int i = 0; i < NUMBER_OF_ARRAY; ++i) {
        cout << "+--------------- Tableau "<< i <<" -----------------+" << endl;
        //pour chaque tableau comparaison avec les autres
        //j'ai mis cette fonction au debut car si je la mets apres les resulats seront fausses car les tableaux sont modifies dans autres fonctions (c'est comme s'ils étaient passes par ref)
        cout << "Comparaison de tableaux : " << endl;
        for (int j = 0; j < NUMBER_OF_ARRAY; ++j) { //boucle permettant d'iterer sur le nombre total de tableau pour comparer le tableau actuel (i) avec tous les autres (j)
            //Comparaison de deux tableaux
            cout << "- tableaux " << i << " et " << j << " :" << endl;
            cout << (compareArrays(listOfArray.at(i), listOfSizeArray.at(i), listOfArray.at(j),listOfSizeArray.at(j)) ? "Les tableaux sont egaux.": "Les tableaux ne sont pas egaux.") << endl;
            cout << endl;
        }

        cout << "Decalage cyclique du tableau " << i << " : " << endl;
        displayArray(listOfArray.at(i), listOfSizeArray.at(i));
        cyclicShift(listOfArray.at(i), listOfSizeArray.at(i));
        displayArray(listOfArray.at(i), listOfSizeArray.at(i));
        cout << endl;

        cout << "Suppression d'une valeur dans le tableau : " << endl;
        displayArray(listOfArray.at(i), listOfSizeArray.at(i));
        deleteValueInArray(listOfArray.at(i), (unsigned int &) listOfSizeArray.at(i), VALUE_TO_DELETE);
        displayArray(listOfArray.at(i), listOfSizeArray.at(i));
        cout << endl;

        cout << "Remplacement de tous les pairs par une valeur : " << endl;
        displayArray(listOfArray.at(i), listOfSizeArray.at(i));
        replacePairByValue(listOfArray.at(i), listOfSizeArray.at(i), VALUE_TO_REPLACE_PAIRS);
        displayArray(listOfArray.at(i), listOfSizeArray.at(i));
        cout << endl;
    }

    return EXIT_SUCCESS;
}

