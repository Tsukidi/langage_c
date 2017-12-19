/**************************************
Exercice 48 : Lire une liste de N nombres r�els entre 0 et 100. D�terminer la valeur minimum lue et le nombre de fois o� elle a �t�
lue. D�terminer la valeur maximum lue et le nombre de fois o� elle a �t� lue
********************************************/

#include <stdio.h>
#include <stdlib.h>
#define NbValeurs 5
#define valMin 0
#define valMax 100
int main()
{
    ///on suppose restecter l'�nonc�
    ///Declaration des variables
    float val;  ///valeur courante entr�e
    float max;  ///maximum courante
    float min = valMax + 1;  ///minimum courante
    int nbMin = 0;
    int nbMax = 0;

    ///Entree et traitement des donnees
    int i; ///la ieme valeur entree

    for (i = 1; i <= NbValeurs; i++)
    {
        ///saisir au clavier la ie valeur
        printf("\n\nEntrez la %d eme valeur a traiter entre 0 et 100 :", i);
        scanf("%f", &val); ///dans val la derniere valeur entree

        ///est elle plus petite?? val < min ?
        if (val < min)
        {
        ///on un nouveau minimum
         min = val;
         nbMin = 1;
        }
        else if (val == min)
        {
            nbMin++;
        }
        if (val > max)
        {
            max = val;
            nbMax = 1;
        }
        else if (val == max)
        {
            nbMax++;
        }

    }
    ///edition du resultat
    printf("\n\nLe minimum est : %f", min);
    printf("\nIl est atteint : %d fois", nbMin);
    printf("\nLe maximum est : %f", max);
    printf("\n\nIl est atteint : %d fois", nbMax);

    return 0;
}
