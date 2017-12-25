/*******************
Exercice 62 : Ecrire un algorithme qui demande un nombre de départ, et qui
calcule la somme des entiers jusqu’à ce nombre. Par exemple, si l’on entre 5, le
programme doit calculer :
1 + 2 + 3 + 4 + 5 = 15
NB : on souhaite afficher uniquement le résultat, pas la décomposition du calcul.
*******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int number;
    int somme;
    int result_of;

    printf("Entrer un numero: \n");
    scanf("%d", &number);

    for (i=0; i<=number; i++)
    {
        somme = number + i;
        result_of = somme;
        printf("%d\n", result_of);
    }

    return 0;
}
