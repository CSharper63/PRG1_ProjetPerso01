#include "displayArray.h"
#include <iostream>

using namespace std;

void displayArray(int *array, unsigned size) {
    int i = 0;
    if (!size) {
        cout << "tableau vide" << endl;
        return;
    }
    while (i < size) {
        //le premier test permet de vérifier si nous sommes au début de l'itération sur le tableau
        //le second test permet de savoir si nous sommes à la fin de l'itération sur le tableau
        cout << (i == 0 ? "[" : "") << array[i] << ((i + 1) < size ? "," : "");
        i++;
        if (i == size)
            cout << "]" << endl;
    }
}