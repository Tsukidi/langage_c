/****************
Exercice 61 :
1) Ecrire un algorithme qui demande un nombre entier de d�part, et qui ensuite �crit la
table de multiplication de ce nombre, pr�sent�e comme suit (cas o� l'utilisateur entre le
nombre 7) :
Table de 7 :
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
�
7 x 10 = 70
2) Modifiez votre programme pour afficher toutes les tables de multiplication de 1 � 10,
avec un saut de ligne entre chaque.
**********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i;

    printf("Veuillez introduire la table de multiplication que vous souhaitez: \n");
    scanf("%d", &number);

    for (i=1; i<=10; i++)
    printf("\n%d x %d = %d", i, number, number * i);

    return 0;
}
