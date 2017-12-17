/********************************************************
Exercice 60 : Ecrire un algorithme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants. Par exemple,
si l'utilisateur entre le nombre 17, le programme affichera les nombres de 18 à 27.
*********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    int i;
    int number;

    printf("Veuillez introduire un numero entier :\n");
    scanf ("%d", &N);

    for (i=0; i<=10; i++)
    {
        number= N + i;
        printf("%d\n", number);

    }
    return 0;
}
