#include "replacePairByValue.h"

void replacePairByValue(int *array, unsigned size, int value) {
    if (!size)return;
    unsigned i = 0;
    while (i < size) {
        if (array[i] % 2 == 0)
            array[i] = value; //remplace toutes les valeurs paires par la valeur (value) passée en paramètre
        i++;
    }
}