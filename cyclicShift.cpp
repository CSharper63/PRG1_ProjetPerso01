#include "cyclicShift.h"

void cyclicShift(int *array, unsigned size) {
    if (!size) return;
    const int LAST_POS = array[size - 1];
    unsigned i = size - 1;
    //décalage de chaque élément du tableau
    while (i > 0) {
        array[i] = array[i - 1];
        i--;
    }
    //remplace la première valeur du tableau par la dernière
    array[0] = LAST_POS;
}