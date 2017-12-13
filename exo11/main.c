/****************************
Exercice 11 : Ecrivez un programme qui pour deux valeurs entières 42 et 38 données, affiche leur somme, leur différence, puis leur
produit. Les valeurs affichées devront être séparées par un espace.
******************************/

#include <stdio.h>

int main()
{
    float nb1 = 42;
    float nb2 = 38;
    int somme = 0;
    int difference = 0;
    float equation = 0;

    somme = nb1 + nb2;
    difference = nb1 - nb2;
    equation = nb1 / nb2;
    printf("Somme = %d\nDifference = %d\nEquation = %f\n", somme, difference, equation);

    return 0;
}

