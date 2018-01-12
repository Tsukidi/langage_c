/*****************************
Exercice 89 : test clavier
La fonction kbhit teste si un caractère a été frappé au clavier. Tant que ce n'est pas vrai kbhit renvoie 0 (ceci signifie que la valeur
retournée par la fonction kbhit est 0).
while(!kbhit()) // tant que kbhit est faux, exécuter la boucle
Ecrire un programme qui affiche le carré des entiers 1, 2, 3 ...... tant qu'aucun caractère
n'a été frappé au clavier. Vous utiliserez une fonction de temporisation afin que
l’affichage ne soit pas trop
*******************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main()
{
    int i = 0;
    int multiplication;

    printf("Pour sortir de ce programme frapper une touche: ");

    while (!kbhit())
    {
        for (i = 0; i <= multiplication; i++)
        {
            srand(time(NULL));
            i = multiplication;
            multiplication = i * i;
            printf ("i = %d et i*i = %d \n", i, multiplication);
            i++;
        }

    while (1);
    }
    kbhit();

    return 0;
}
