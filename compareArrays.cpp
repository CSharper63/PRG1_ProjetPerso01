#include "compareArrays.h"

bool compareArrays(int *array0, unsigned size0, int *array1, unsigned size1) {
    bool isTab0In1 = true,
        isTab1In0 = true;
    if (size0 == 0 && size1 == 0) return true;

    //pour l ensemble tableau 1 inclu dans tableau 0
    for (int i = 0; i < size0; ++i) {
        //si aucune valeur de tab0 n'est inclue dans tab1
        if (!checkValueIn(array1, size1, array0[i])) {
            isTab0In1 = false;
            break;
        }
    }

    //pour l ensemble tableau 1 dans tableau 0
    for (int i = 0; i < size1; ++i) {
        //si aucune valeur de tab1 n'est inclue dans tab0
        if (!checkValueIn(array0, size0, array1[i])) {
            isTab1In0 = false;
            break;
        }
    }

    return isTab1In0 && isTab0In1;
}

bool checkValueIn(const int *array, unsigned size, int value) {
    unsigned i = 0;
    while (i < size) {
        if (array[i] == value)
            return true;
        i++;
    }
    return false;
}