/*************************************
Dessiner moi un carré d'*NxN avec des # dans les bords +  $ dans le centre
************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration et Initialization
    //Taille du carré
    int N;
    int lig, col; //ligne courante, colonne courante
    //Entree des données
    //Lire N
    printf("Entrez la valeur de N :\n\n");
    scanf("%d", &N);
    //Dessiner le carré:
    /** pour chaque ligne lig de 0 à N-1
            dessiner la ligne lig
            pour une colonne col de 0 à N-1
                Dessiner le caractere choisi '*'
            aller a la ligne suivante : lig --> lig +1
        fin du dessin du carré
    **/
    for(lig = 0; lig < N; lig++) // lig - lig+1
    {
        //dessiner la ligne lig
        for (col = 0; col < N; col++)
        {
            //ici a l'intersection de la ligne lig et de la colonne col,
            //on dessine le caractere choisi
             if ( lig == (N-1)/2 && col == (N-1)/2)
            {
                printf("$");
            }
            else
            {
                if (lig == 0 || col == 0 || lig == N-1 || col == N-1)
                {printf("#");}

                else
            {
                 printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    }
    return 0;
}
