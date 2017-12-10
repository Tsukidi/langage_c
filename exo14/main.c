/***********************************
Exercice 14 : Réaliser un convertisseur euro/franc ou franc/euro.
**************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration, initialisation
    float valEuros, valFrancs;
    //Entree des donnees
    //Mettre un message à l'ecran
    printf("Entrer la valeur en Euros nombre a virgule:\n");
    scanf("%f", &valEuros);
    //printf("Adresse ou est stockee la valeur valEuros : %d", &valEuros);
    printf("Valeur en euros a convertir : %f euros", valEuros);
    //Calculs
    valFrancs=valEuros*6.55957;
    //Edition des resultats
    printf("La contrepartie en francs de %f euros est : %f francs\n", valEuros, valFrancs);
    return 0;
}
