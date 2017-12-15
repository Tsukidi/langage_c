/********************
Exercice 55 : La règle du jeu du fizz-buzzle est la suivante. Soient plusieurs joueurs :
- Le premier joueur indique à voix haute la valeur du compteur (démarrage avec la valeur à 1),
- Le joueur suivant incrémente de 1 et cite la valeur et ainsi de suite.
- On ne cite pas les valeurs multiples de 5 et de 7 mais on les remplace par, respectivement, fizz , buzzle et fizz-buzzle lorsqu'elle est
multiple de 5 et 7 (exemple 35).
Vous devez écrire un programme affichant un jeu de fizz-buzzle entre les valeurs 1 et 99.
Exemple : 1, 2, 3, 4, fizz, 6, buzzle, 8, 9, fizz, 11, 12, 13, buzzle, etc..
********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int compteur = 1;
    int nombre;

    while (nombre > 0 )
    {
    printf("\nVeuillez introduire un numero entre 1 et 99 :");
    scanf("%d", &nombre);

       while (nombre % 5 == 0)
       {
           printf("Fizz\n");
           break;
       }
           while ( nombre % 7 == 0)
           {
               printf("Buzzle\n");
               break;
           }

               while (nombre % 5 == 0 && nombre % 7 == 0)
               {
                   printf("Fizz-Buzzle\n");
                   break;

               }
    }

    return 0;
}
