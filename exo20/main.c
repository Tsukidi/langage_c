/***************************************
Exercice 20 : Ecrivez un programme qui lit un nombre et affiche "nombre positif", ou bien "nombre n�gatif", ou alors "nombre
nul", selon l'entier fourni.
On pourra proposer plusieurs solutions �quivalentes.
Indication :
� On peut imbriquer des instructions if
� Un else se rapporte toujours au dernier if rencontr� auquel un else n'a pas encore �t� attribu�.
******************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration et initialisation
    int nbLu;

    //Entree des donnees
    printf("Entrez un entier : \n");
    scanf("%d", &nbLu);

    //Traitement des donnees
    if(nbLu > 0)
    {
        printf("Ce nombre est positif \n\n");

    }

    else
    {
        if (nbLu < 0)
        {
        printf("Ce nombre est negatif \n\n");
        }

        if (nbLu = 0)
        {
        printf("Ce nombre est nulle\n\n");
        }
    }
    return 0;
}

    ///Autre fa�on!
    if (nbLu <=0)
        if (nbLu < 0)
    {
        printf("Ce nombre est negatif");
    }
    else {
        printf("Ce nombre est nul");
    }
    else {
        printf("Ce nombre est positif");
    }
