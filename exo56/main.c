/************************
Exercice 56 : Ecrire un programme permettant de simuler un distributeur automatique de café.
On considère que le prix d'un café est de 0,80 euros. La machine doit pouvoir rendre la monnaie si besoin est. Elle accepte les pièces
de 10, 20 et 50 centimes
- Introduire les pièces
- Calcul et affichage : du nombre de pièces valides insérées et de la somme engagée.
- S’il y a assez d'argent, verser le café et rendre la monnaie, si besoin, sinon attendre une nouvelle pièce.
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
