/****************************
Exercice 11 : Ecrivez un programme qui pour deux valeurs entières 42 et 38 données, affiche leur somme, leur différence, puis leur
produit. Les valeurs affichées devront être séparées par un espace.
******************************/

#include <stdio.h>

int main()
{
    // ARRETE DUTILISER NB ET NB1 CEST PAS CLAIR ! PREND NB1 et NB2 !
    // INT = VALEUR SANS VIRGULE - FLOAT = VALEUR AVEC VIRGULE !

    float nb1 = 42;
    float nb2 = 38;
    int somme = 0;
    int difference = 0;
    float equation = 0;

    somme = nb1 + nb2;
    difference = nb1 - nb2;
    equation = nb1 / nb2;
    printf("Somme = %d\nDifference = %d\nEquation = %f\n", somme, difference, equation);

    // TU DOIS PRECISER LES VARIABLES QUIL DOIT REMPLACER DANS LE PRINTF !!!!! printf("Edition : %f %f %f\n");
    // SCANF C EST POUR DEMANDER UNE VALEUR A LUTILISATEUR !!!!  scanf("%f" "%f" "%f", &nb2, &nb3, &nb4);
    return 0;
}

