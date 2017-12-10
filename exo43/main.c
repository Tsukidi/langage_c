/*******************
Exercice 43 : Ecrivez un programme qui lit deux nombres au clavier et qui affiche dans l'ordre, un par ligne, tous les entiers
compris entre ces deux nombres. On suppose que l'utilisateur entre le plus petit des deux nombres en premier. On utilisera soit une
boucle while soit une boucle for
Par exemple si l'utilisateur entre 211 puis 214, le programme devra afficher :
211
212
213
214
***********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2;

    printf("Entrez deux nombres entiers (un plus petit que l'autre) : \n");
    scanf("%d" "%d", &N1, &N2);

    int nombre;
    nombre = N1++ && N2--;

    while ( N1 < nombre < N2 )
    {
        printf("%d\n", nombre);
        scanf("%d", &nombre);
    }

    return 0;
}
