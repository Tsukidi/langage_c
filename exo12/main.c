/************************************
Exercice 12 : Ecrivez un programme qui demande un entier à l'utilisateur lors de l'exécution du programme, et affiche sa valeur et
celle de son carré .
********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb = 0;
    int carre = 0;

    printf("Veuillez introduire un numero entier : ");
    scanf("%d", &nb);

    carre = nb * nb;
    printf("Le carre de %d est %d", nb, carre);

    return 0;
}
