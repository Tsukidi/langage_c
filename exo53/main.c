/***********
Exercice 53 : Opérateur séquentiel
Calculer la moyenne de notes fournies au clavier avec un "dialogue" de ce type :
Le nombre de notes n'est pas connu a priori et l'utilisateur peut en fournir autant qu'il
le désire. Pour signaler qu'il a terminé, on convient qu'il fournira une note fictive
négative. Celle-ci ne devra naturellement pas être prise en compte dans le calcul de la
moyenne.
***************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N = 0;
    float somme = 0;
    int i;

    do{} while (N>0);
    {
        printf("Entrez une note: \n");
        scanf("%f", &N);
        somme = somme + N;
        i++;
    }
        if (N<0)
        {
            i--;
            somme = somme - N;
            printf("Resultat : %f", somme/i);
        }

    return 0;
}
