/****************************
Exercice 92 : Nous utiliserons une constante globale pour définir la taille des tableaux utilisés par le programme suivant:
const int NB = 10;
1) Écrivez une fonction qui prend un tableau de taille NB en paramètre, et initialise chacun de ses éléments à une valeur aléatoire.
2) Écrivez une fonction qui affiche un tableau de taille NB passé en paramètre.
3) Écrivez une fonction qui prend un tableau de taille NB en paramètre et un paramètre noté n. La fonction devra retourner le
nombre d'éléments du tableau divisibles par n.
*****************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
///Constantes et variables globables
const int NB = 10;

///Declarations de fonctions
void initialisation (int[]);
void affiche (int []);
int divisiblePar (int [], int);
int main()
{
    srand(time(0));
    ///Declaration
    int tab[NB];
    ///Initialiser le tableau
    initialisation(tab);
    affiche (tab);
    int n = 2;
    printf("Nombre d'elements pairs : %d" , divisiblePar (tab, n));
    return 0;
}
///Definition des fonctions
void initialisation (int tab [])
{
    ///Affiche le tableau tab
    int i;
    int nbMultiple_n = 0;
    printf("\nInitialisation du tableau");
    for (i=0; i < NB; i++)
    {
        if(tab[i]%n == 0)
        {
            nbMultiple_n++;
        }
       printf("%d", tab[i]);
    }
    return nbMultiple_n;
}
