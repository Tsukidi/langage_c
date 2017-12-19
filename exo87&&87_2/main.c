/*************************
Exercice 87 : jeu de 421
Vous allez r�aliser un mini jeu de 421. Les r�gles sont simples, vous avez 4 essais pour r�aliser avec
les 3 d�s un jet donnant 421. Le programme lance les d�s et affiche le r�sultat. Si c'est un 421, on
affiche "Gagn�", sinon on demande � l'utilisateur d'appuyer sur la touche R pour relancer. Au bout du
4�me essai, au lieu de proposer de relancer, on affichera "Perdu" et le programme se
terminera.
*************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, d3;
    int nbEssai = 0;
    int gagne = 0;

    srand(time(0));

    do
    {
        printf("\nJouez le coup suivant  en appuyant sur une touche : ");
        getch();
        nbEssai++;
        d1 = 1 + rand()%6; ///rand fourni un entier entre 0 et l'entier max
        d2 = 1 + rand()%6;
        d3 = 1 + rand()%6;
        printf("\n\nVous avez lance : [%d] [%d] [%d]", d1, d2, d3);

        if ((d1+d2+d3 == 7) && (d1==4) || (d2==4) || (d3==4) )
        {
            gagne = 1;
            printf("\nVous avez gagne!");
        }
        else
        {
            gagne = 0;
            printf("\nVous avez perdu pour ce coup");
        }
    }
    while (nbEssai <= 3 && !gagne);
    printf("\n");

    return 0;
}
