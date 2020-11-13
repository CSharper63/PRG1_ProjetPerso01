#include "replacePairByValue.h"

void replacePairByValue(int *tab, unsigned size, int value) {
    unsigned i = 0;
    while (i < size) {
        if (i % 2)
            tab[i] = value; //remplace toutes les valeurs paires par la valeur (value) passée en paramètre
        i++;
    }
}