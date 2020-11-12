//
// Created by Maxime on 12.11.2020.
//

#include "deleteValueInArray.h"

void deleteValueInArray(int *tab, int size, int valueToDelete) {
    int i = 0;
    while (i < size) {
        if (tab[i] == valueToDelete) {
            //boucle sur le tableau pour supprimer toutes les valeurs correspondantes à valueToDelete
            for (int j = i + 1; j < size; j++) {
                tab[j - 1] = tab[j];
            }
            i-- && size--;
        }
        i++;
    }
}