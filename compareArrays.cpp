//
// Created by Maxime on 12.11.2020.
//

#include "compareArrays.h"

bool checkValueIn(int *tab, int size, int value);

bool compareArrays(int *tab0, int size0, int *tab1, int size1) {
    bool isTab0In1 = true,
        isTab1In0 = true;
    if (size0 == 0 && size1 == 0) return true;

    //pour l ensemble tab1 inclu dans tab0
    for (int i = 0; i < size1; ++i) {
        //si aucune valeur de tab0 n'est inclue dans tab1
        if (!checkValueIn(tab1, size1, tab0[i])) {
            isTab0In1 = false;
            break;
        }
    }

    //pour l ensemble tab1 dans tab0
    for (int k = 0; k < size0; ++k) {
        //si aucune valeur de tab1 n'est inclue dans tab0
        if (!checkValueIn(tab0, size0, tab1[k])) {
            isTab1In0 = false;
            break;
        }
    }

    return isTab1In0 && isTab0In1;
}

bool checkValueIn(int *tab, int size, int value) {
    for (int j = 0; j < size; j++) {
        if (tab[j] == value) {
            return true;
        }
    }
    return false;
}