/********************
Exercice 47 : Calcul de la moyenne d'une liste de nombres r�els. Les �tapes sont :
- saisir le nombre de valeurs � saisir
- saisir les valeurs
- afficher la moyenne
*******************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;
    float moyenne;

    printf("Veuillez introduire une liste de nombres reels ( 3 valeurs ) :\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    moyenne = n1 + n2 + n3 / 3;

    printf("Moyenne : %f", moyenne);
    scanf("%f", &moyenne);
    return 0;
}
