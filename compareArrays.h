#ifndef PRG1_PROJETPERSO01_COMPAREARRAYS_H
#define PRG1_PROJETPERSO01_COMPAREARRAYS_H

/**
 * Cette fonction compare si les deux tableaux sont pareils en terme ensembliste
 * @param array0 : premier tableau en int à comparer
 * @param size0 : taille du premier tableau en int
 * @param array1 : second tableau en int à comparer
 * @param size1 : taille en int du second tableau
 * @return valeur booléenne si pareils ou non
 */
bool compareArrays(int *array0, unsigned size0, int *array1, unsigned size1);

/**
 * Cette fonction permet de verifier si une valeur se trouve dans un tableau
 * @param array : tableau en int dans lequel vérifier une potentielle valeur existante
 * @param size : taille du tableau en int
 * @param value : valeur à vérifier dans le tableau
 * @return valeur booléenne si existante ou non
 */
bool checkValueIn(const int *array, unsigned size, int value);

/**
 * Cette fonction vérifie si un tableau est inclu dans l'autre
 * @param array0 premier tableau en int
 * @param size0 taille du premier tableau en int
 * @param array1 second tableau en int
 * @param size1 taille du second tableau en int
 * @return valeur booléenne si inclu ou non
 */
bool checkArrayInOtherOne(int *array0, unsigned size0, int *array1, unsigned size1);

#endif //PRG1_PROJETPERSO01_COMPAREARRAYS_H
