/****************************************
Exercice 23 Bis : Ecrire un programme qui lit 3 nombres et affiche le maximum des 3 nombres.
*******************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb1;
    int nb2;
    int nb3;

    printf("Entrez trois nombres a trier: \n");
    scanf("%d", &nb1);

    if (nb1 > nb2 > nb3)
    {
        printf("%d<%d<%d", nb1, nb2, nb3);
    }
    if (nb2 > nb1 > nb3)
    {
        printf("%d<%d<%d", nb2, nb1, nb3);
    }
    if (nb3 > nb2 > nb1)
    {
        printf("%d<%d<%d", nb3, nb2, nb3);
    }

    return 0;
}
