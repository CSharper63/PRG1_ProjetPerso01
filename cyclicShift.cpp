//
// Created by Maxime on 12.11.2020.
//

#include "cyclicShift.h"

void cyclicShift(int *tab, int size) {
    if (!size) return;
    const int LAST_POS = tab[size - 1];
    int i = size - 1;
    //décalage de chaque élément du tableau
    while (i > 0) {
        tab[i] = tab[i - 1];
        i--;
    }
    //remplace la première valeur du tableau par la dernière
    tab[0] = LAST_POS;
}