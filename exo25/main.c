/*******************
Exercice 25 : �crivez un programme qui lit un entier repr�sentant une ann�e, et affiche "bissextile" ou "non bissextile" en fonction
de l'ann�e. On rappelle qu'une ann�e est bissextile si elle est un multiple de 4, � l'exception des ann�es multiples de 100 qui ne sont
pas multiples de 400. Par exemple, l'ann�e 1900 n'est pas bissextile, mais l'ann�e 2000 l'est.
*********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee = 0;
    printf("Veuillez introduire une date: \n");
    scanf("%d", &annee);

    if ( annee % 4 == 0 || annee % 400 == 0)
    {
        printf("C'est une annee bissextile %d", annee);
    }

    if ( annee % 100 != 0)
    {
        printf("Ce n'est pas une annee bissextile %d", annee);
    }
    return 0;
}
