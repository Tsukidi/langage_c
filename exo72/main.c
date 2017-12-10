/***************************
Exercice 72 : Afficher un triangle rempli d'étoiles, s'étendant sur un nombre de lignes fourni en donnée.
************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1 = 1;
    int mem = 0;

    printf("Conbien de lignes a le triangle :\n");
    scanf("%d", &nb1);
    mem = nb1;

    while (mem != 0)
    {
        while(nb1 > 0)
        {
            printf("*");
            nb1--;
        }
        mem--;
        printf("\n");
        nb1 = mem;
    }
    printf("\n");
    return 0;
}
