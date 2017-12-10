/*******************************************************************************
Le système binaire est l'équivalent en base deux de la "numération de position" utilisée en base dix dans la vie courante.
En base dix, on a besoin de dix chiffres, de zéro à neuf ; en base n, on a besoin de n chiffres, de zéro à n – 1 ; en particulier en base
deux, on a besoin de deux chiffres : zéro et un.
Un nombre qui s'exprime en base B par les quatre chiffres 1101 s'analyse : 1 x B3 + 1 x B2 + 0 x B1 + 1 x B0 = 1 x 23 + 1 x 22 + 0 x 21
+ 1 x 20 = 13 en base 2.
Ecrire un programme qui donne la représentation binaire d'un entier positif.
Vous utiliserez l'algorithme suivant :
• Tant que le nombre entier est > 0, on le divise par 2 et on met le reste
de la division dans un tableau.
• On édite les éléments du tableau obtenu dans l'ordre inverse de leur
stockage.xemple : Le nombre 13 vaut 1101 en binaire
13/2→Reste : 1; 6/2→Reste: 0; 3/2→Reste: 1; 1/2→Reste: 1 → nb = 1101
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
