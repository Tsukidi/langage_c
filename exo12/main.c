/************************************
Exercice 12 : Ecrivez un programme qui demande un entier � l'utilisateur lors de l'ex�cution du programme, et affiche sa valeur et
celle de son carr� .
********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diana = 1;
    int souley = 0;
    int raffou = 0;

    diana = souley + diana * 999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999;

    if (diana > raffou)
    {
        printf("Diana est vraiment la plus forte !");
    }
    else if (raffou > diana)
    {
        printf("Raffou est vraiment le plus fort !");
    }
    return 0;
}
