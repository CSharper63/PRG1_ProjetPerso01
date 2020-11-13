#include "deleteValueInArray.h"

void deleteValueInArray(int *array, unsigned& size, const int &value) {
    if (!size)return;
    int i = 0;
    while (i < size) {
        if (array[i] == value) {
            //boucle sur le tableau pour supprimer toutes les valeurs correspondantes à valueToDelete
            for (int j = i + 1; j < size; j++) {
                array[j - 1] = array[j];
            }
            i-- and size--;
        }
        i++;
    }
}