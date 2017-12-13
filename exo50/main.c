/**************
Exercice 50 : Rédiger un programme permettant de lire une série de nombres jusqu'à la saisie d'une valeur négative. Afficher alors
la moyenne des valeurs positives saisies. Exemple : 5, 3, 4, -1 affiche la moyenne 4.
***************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 1;
    int moyenne = 0;
    int count = 0;

    while (N > 0)
    {
    printf("Veuillez introduire 3 valeurs :");
    scanf("%d", &N);

        if ( N > 0)
        {
            moyenne = moyenne + N;
            count++;
        }
        else
            N = -1;
    }

    moyenne = moyenne / count;
    printf("La moyenne est : %d", moyenne);

    return 0;
}
