/**************************
Exercice 44 : Ecrire un programme qui demande en boucle d’entrer un nombre positif
jusqu’à obtenir satisfaction.
**************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    do
    {
        printf("\n Entrez le nombre positif n :");
        scanf("%d", &N);
    }
    while (N <= 0);
    {
        printf("Bravo!! : \n");
    }
    return 0;
}
