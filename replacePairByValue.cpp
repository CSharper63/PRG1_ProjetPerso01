//
// Created by Maxime on 12.11.2020.
//

#include "replacePairByValue.h"

void replacePairByValue(int *tab, int size, int value) {
    int i = 0;
    while (i < size) {
        if (i % 2)
            tab[i] = value; //remplace toutes les valeurs paires par la valeur (value) passée en paramètre
        i++;
    }
}