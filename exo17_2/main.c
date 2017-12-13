/***************************************************************
Exercice 17-2 : calculer le périmètre d’un cercle
Ecrire un programme qui détermine le périmètre d’un cercle à partir de son rayon.
*******************************************************/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    //Declaration, initialisation
    double rayon, perimetre;

    //Entree des donnees
    printf("Entree le rayon : \n");
    scanf("%f", &rayon);

    //Calcul du perimetre
    perimetre = 2 * PI * rayon;

    //Edition des resultats
    printf("\n\n Le perimetre d'un cercle de rayon %f est : %f", rayon, perimetre);

    return 0;
}
