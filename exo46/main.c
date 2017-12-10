/********************
Exercice 46 :
1) Ecrire un programme qui tire un nombre au hasard entre 1 et 10 et demande à l'utilisateur de le deviner.
2) Modifier le programme de façon ne laisser que 3 essais à l'utilisateur
***********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarations
    int nbATrouver; // genere par le pc
    int nbPropose;  // propose par le jouer
    int nbCoups = 0; //nombre de coups joues
    // generer le nombre a trouver au hasard
    srand(time (0)); //initialise le generateur
    nbATrouver = 1+rand()%10;
    printf("Le nombre a trouver est : %d\n", nbATrouver);

    //On joue
    do
    {
        //jpuer le prochain coup
        nbCoups++;
        printf("\nEntrez votre coup entre 1 et 10 : ");
        scanf("%d", &nbPropose);
        //On aide le joueur
        if (nbPropose > nbATrouver)
        {
            printf("\n\tTrop grand !");
        }
        else
        {
            printf("\n\tTrop petit !");
        }
    }
    while (nbPropose != nbATrouver && nbCoups < 3);

    if (nbPropose == nbATrouver)
    {
        printf("\n\nBRAVO! Vous avez trouve en %d coups!!", nbCoups);
    }
    else
    {
        printf("PERDU!!! Vous avez epuise le nombre de coups autorises!!!");
    }
    return 0;
}
