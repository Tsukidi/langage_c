/*******************
Exercice 45 : Ecrire un programme qui lise un caractère au clavier jusqu’à obtenir un’x’.
**********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char L;

    printf("Veuillez introduire une lettre : \n");
    scanf("%s", &L);

    while ( L != 'x')
    {
        printf("Try Again\n");
        scanf("%s", &L);

       if ( L == 'x')
        {
            printf("Bravo!\n");
        }
    }
    return 0;
}
