/****************
Exercice 41 : 1) Ecrivez un programme qui affiche, pour chaque entier de 1 à 20, sa valeur, un espace, le texte "au carré vaut", un
espace, la valeur de son carré et un retour à la ligne :
1 au carré vaut 1
2 au carré vaut 4
3 au carré vaut 9
...
On utilisera une boucle while.
*****************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    int valeur;

    printf("Veuillez introduire un entier de 1 a 20 : ");
    scanf("%d", &N);
    valeur = N *N;

    while (valeur <= 400 || N <= 20)
    {
        printf("%d au carre vaut %d", N, valeur);
        break;
    }
    return 0;
}
