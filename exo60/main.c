/********************************************************
Exercice 60 : Ecrire un algorithme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants. Par exemple,
si l'utilisateur entre le nombre 17, le programme affichera les nombres de 18 à 27.
*********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    int mem;

    printf("Veuillez introduire un numero entier :\n");
    scanf ("%d", &N);
    mem = N;
    N = N++;

    if (mem != N++)
    {
        printf("%d %d %d %d %d %d %d %d %d %d", N);
        mem++;
        if (mem > 0)
        {
            printf("\n");
            mem++;
        }
    }
    printf("\n");
    return 0;
}
