/***********************************
Exercice 22 : Ecrire un algorithme qui demande deux nombres A et B à l’utilisateur, puis met le plus petit dans A et le plus grand
dans B.
***********************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration et initialization
    int A, B;

    //Entree des donnees
    printf("Entrez deux entiers separes par un espace :\n");
    scanf("d%d", &A, &B);
    printf("\n\n A = %d, B= %d", A,B);

    //Traiter les donnees
    if (A>B)
    {
        //Permuter A et B
    }
    else
    {
        //Rien a faire A et B sont dans le bon ordre
    }

    printf("\n\n A present : A=%d, B=%d", A,B);

    return 0;
}
