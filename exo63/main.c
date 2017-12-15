/*********************
Exercice 63 :
1) Ecrire un algorithme qui demande un nombre de départ (>=1), et qui calcule sa factorielle.
NB : la factorielle de 8, notée 8 !, vaut 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 = 40320. On affichera 8 ! = 40320
******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int factorial = 1;
    int number;

    printf("Entrez un numero:\n");
    scanf("%d", &number);

    for (i=1; i<=number; i++);
        factorial = factorial * i;
        printf("\n%d!=%d", number, factorial);

    return 0;
}
