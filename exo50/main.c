/**************
Exercice 50 : Rédiger un programme permettant de lire une série de nombres jusqu'à la saisie d'une valeur négative. Afficher alors
la moyenne des valeurs positives saisies. Exemple : 5, 3, 4, -1 affiche la moyenne 4.
***************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;
    float moyenne;

    printf("Veuillez introduire 3 valeurs :");
    scanf("%f%f%f", &n1, &n2, &n3);

    while ( n1 > 0 && n2 > 0 && n3 > 0)
    {
        printf("%f%f%f\n", n1, n2, n3);

        if ( n1 < 0 || n2 < 0 || n3 < 0)
        break;
    }

    moyenne = n1 + n2 + n3 / 3;
    printf("La moyenne est :", moyenne);
    scanf("%f", &moyenne);

    return 0;
}
