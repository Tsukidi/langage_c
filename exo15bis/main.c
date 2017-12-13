/*******************************************************************************
Convertisseur en binaire
********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb = 0;
    int rest = 0;
    int *tab;
    int i = 0;

    printf("Entrer le nombre a convertir en binaire :");
    scanf("%d", &nb);

    while ( nb > 0)
    {
        rest = nb % 2;
        nb = nb / 2;
        tab[i] = rest;
        i++;
    }

    while (i > 0)
    {
        i--;
        printf("%d", tab[i]);
    }

    return 0;
}
