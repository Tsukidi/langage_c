/*************************************
Dessiner moi un carr� d'*NxN
************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration et Initialization
    //Taille du carr�
    int N;
    int lig, col; //ligne courante, colonne courante
    //Entree des donn�es
    //Lire N
    printf("Entrez la valeur de N :\n\n");
    scanf("%d", &N);
    //Dessiner le carr�:
    /** pour chaque ligne lig de 0 � N-1
            dessiner la ligne lig
            pour une colonne col de 0 � N-1
                Dessiner le caractere choisi '*'
            aller a la ligne suivante : lig --> lig +1
        fin du dessin du carr�
    **/
    for(lig = 0; lig < N; lig++) // lig - lig+1
    {
        //dessiner la ligne lig
        for (col = 0; col < N; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    //Avec de while
    lig = 0;

    while (lig < N)
    {
        //dessiner la ligne lig
        col = 0;
        while (col < N)
        {
            printf("*");
            col++;
        }
        lig++;
        printf("\n");
    }
    return 0;
}
