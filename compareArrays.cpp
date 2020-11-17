#include "compareArrays.h"

bool compareArrays(int *array0, unsigned size0, int *array1, unsigned size1) {
    if (!size0 and !size1) return true;
    return checkArrayInOtherOne(array0, size0, array1, size1) and checkArrayInOtherOne(array1, size1, array0, size0);
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

bool checkArrayInOtherOne(int *array0, unsigned size0, int *array1, unsigned size1){
    //pour l ensemble tableau 1 inclu dans tableau 0
    for (int i = 0; i < size0; ++i) {
        //si aucune valeur de tab0 n'est inclue dans tab1
        if (!checkValueIn(array1, size1, array0[i]))
            return false;
    }
    return true;
}