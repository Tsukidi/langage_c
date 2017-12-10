/***********************************************************************************
Ecrire un programme qui lit des nombres tant que leur somme est inférieure à 100.
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration, initialisation
    int nb;
    int somme = 0;
    //Lire des nb tant que leur somme est inferieur a 100
    while(somme < 100)
    {
        //Lire le nombre suivant et le cumuler dans somme
        printf("\n\n Entrez une nouvelle valeur : ");
        scanf("%d", &nb);
        //somme = somme+nb;
        somme+=nb;
        printf("\n La somme est a present de : %d", somme);
    }
    printf("Try again!!\n\n");
    return 0;
}
