/****************************
Exercice 11 : Ecrivez un programme qui pour deux valeurs enti�res 42 et 38 donn�es, affiche leur somme, leur diff�rence, puis leur
produit. Les valeurs affich�es devront �tre s�par�es par un espace.
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

