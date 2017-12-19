/************************
Exercice 56 : Ecrire un programme permettant de simuler un distributeur automatique de caf�.
On consid�re que le prix d'un caf� est de 0,80 euros. La machine doit pouvoir rendre la monnaie si besoin est. Elle accepte les pi�ces
de 10, 20 et 50 centimes
- Introduire les pi�ces
- Calcul et affichage : du nombre de pi�ces valides ins�r�es et de la somme engag�e.
- S�il y a assez d'argent, verser le caf� et rendre la monnaie, si besoin, sinon attendre une nouvelle pi�ce.
*************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cafe = (0,80);
    float monnaie;
    int pieces;

    while (pieces != cafe)
    {
    printf("Le prix d'un cafe est 0.80.\n Veuillez introduire vos pieces ( 10 , 20 ou 50 centimes ): \n");
    scanf("%d", &pieces);

        while (pieces < cafe)
    {
        monnaie = pieces - cafe;
        printf("Il manque encore %f cents", monnaie);

        if (pieces > cafe)
        {
            printf("Je vous rend %f", monnaie);
            monnaie = pieces - cafe;
        }

        else
        {
            printf("En train de verser le cafe.");
            break;
        }
    }
    }

    return 0;
}
