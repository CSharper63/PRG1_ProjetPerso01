#include "replacePairByValue.h"

void replacePairByValue(int *tab, unsigned size, int value) {
    if (!size)return;
    unsigned i = 0;
    while (i < size) {
        if (tab[i] % 2 == 0)
            tab[i] = value; //remplace toutes les valeurs paires par la valeur (value) passée en paramètre
        i++;
    }
}