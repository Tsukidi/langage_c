/****************************
Exercice 92 : Nous utiliserons une constante globale pour d�finir la taille des tableaux utilis�s par le programme suivant:
const int NB = 10;
1) �crivez une fonction qui prend un tableau de taille NB en param�tre, et initialise chacun de ses �l�ments � une valeur al�atoire.
2) �crivez une fonction qui affiche un tableau de taille NB pass� en param�tre.
3) �crivez une fonction qui prend un tableau de taille NB en param�tre et un param�tre not� n. La fonction devra retourner le
nombre d'�l�ments du tableau divisibles par n.
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
