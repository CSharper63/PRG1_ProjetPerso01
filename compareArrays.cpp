#include "compareArrays.h"

bool compareArrays(int *tab0, unsigned size0, int *tab1, unsigned size1) {
    bool isTab0In1 = true,
        isTab1In0 = true;
    if (size0 == 0 && size1 == 0) return true;

    //pour l ensemble tab1 inclu dans tab0
    for (int i = 0; i < size0; ++i) {
        //si aucune valeur de tab0 n'est inclue dans tab1
        if (!checkValueIn(tab1, size1, tab0[i])) {
            isTab0In1 = false;
            break;
        }
    }

    //pour l ensemble tab1 dans tab0
    for (int i = 0; i < size1; ++i) {
        //si aucune valeur de tab1 n'est inclue dans tab0
        if (!checkValueIn(tab0, size0, tab1[i])) {
            isTab1In0 = false;
            break;
        }
    }

    return isTab1In0 && isTab0In1;
}

bool checkValueIn(int *tab, unsigned size, int value) {
    unsigned i = 0;
    while (i < size) {
        if (tab[i] == value)
            return true;
        i++;
    }
    return false;
}