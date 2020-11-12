//
// Created by Maxime on 12.11.2020.
//

#ifndef PRG1_PROJETPERSO01_COMPAREARRAYS_H
#define PRG1_PROJETPERSO01_COMPAREARRAYS_H

/**
 * Cette fonction compare si les deux tableaux sont pareils en terme ensembliste
 * @param tab0 : premier tableau en int à comparer
 * @param size0 : taille du premier tableau en int
 * @param tab1 : second tableau en int à comparer
 * @param size1 : taille en int du second tableau
 * @return valeur booléenne si pareils ou non
 */
bool compareArrays(int *tab0, int size0, int *tab1, int size1);

/**
 * Cette fonction permet de verifier si une valeur se trouve dans un tableau
 * @param tab : tableau en int dans lequel vérifier une potentielle valeur existante
 * @param size : taille du tableau en int
 * @param value : valeur à vérifier dans le tableau
 * @return valeur booléenne si existante ou non
 */
bool checkValueIn(int *tab, int size, int value);

#endif //PRG1_PROJETPERSO01_COMPAREARRAYS_H
