/****************
Exercice 61 :
afficher toutes les tables de multiplication de 1 à 10,
avec un saut de ligne entre chaque.
**********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;


    for (i=1; i<=10; i++)
    printf("\n%d x 1 = %d", i, 1 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 2 = %d", i, 2 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 3 = %d", i, 3 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 4 = %d", i, 4 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 5 = %d", i, 5 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 6 = %d", i, 6 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 7 = %d", i, 7 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 8 = %d", i, 8 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 9 = %d", i, 9 * i);
    printf("\n");

    for (i=1; i<=10; i++)
    printf("\n%d x 10 = %d", i, 10 * i);
    printf("\n");

    return 0;
}
