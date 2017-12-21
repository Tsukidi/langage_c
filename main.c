/********************
Exercice 87-2 : Modifier l'exercice précédent de façon à jouer autant de fois que l'on veut,
en arrêtant par la touche 'q'. Vous éditerez la statistique du pourcentage de coups gangnants.
**********************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
///Variables globales

///Declaration des variables
int lancerDeDe ();

///Fonction principale
int main()
{
    int d1, d2, d3; ///int d[3] nous pouvons aussi dire qu'il existe un tableau de 3 valeurs
    int nbEssai = 0;
    int gagne = 0;
    float pourcentage;
    ///Initialiser le generateur aleatoire
    srand(time(0));

    do
    {
        nbEssai++;
        printf("\nJouez le coup suivant  en appuyant sur une touche ( 'q' pour arreter ) : ");
        char c = getch();
        ///si c == q on sort sinon on joue
        d1 = lancerDeDe ();
        d2 = lancerDeDe ();
        d3 = lancerDeDe ();
        if (c=='q')
        {
            break;
        }
        printf("\n\nVous avez lance : [%d] [%d] [%d]", d1, d2, d3);

        if ((d1+d2+d3 == 7) && (d1==4) || (d2==4) || (d3==4) )
        {
            printf("\nVous avez gagne!");
            gagne++;
        }
        else
            printf("\nVous avez perdu pour ce coup");

    }
        while (1); ///on ne s'arrete jamais de jouer
        ///on sort de la boucle de jeu par le break

        pourcentage = gagne / nbEssai;
        printf("Pourcentage: %f\n\n :", pourcentage);

        printf("\n");
        ///Definition des foctions
        int lancerDeDe ();{
        return 1 + rand()%6;
        }
