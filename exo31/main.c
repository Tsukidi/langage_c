/**************************
Exercice 31 : Ecrire un programme qui demande à l’utilisateur d’entrer
le rayon d’un cercle, puis lui demande s’il souhaite en obtenir le diamètre,
le périmètre ou l’aire:
• Si l’utilisateur entre 1, le diamètre sera affiché.
• Si l’utilisateur entre 2, le périmètre sera affiché.
• Si l’utilisateur entre 3, l’aire sera affichée.
*****************************/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float rayon = 0;
    int choix = 0;

    printf("Veuillez entrer le rayon d'un cercle : \n");
    scanf("%f", &rayon);
    printf("1.Diametre du cercle\n2.Perimetre du cercle\n3.Aire du cercle\n");
    scanf("%d", &choix);

    switch (choix)
    {
    	case 1:
        rayon = 2 * rayon;
        printf("Le diametre du cercle est : %f", rayon);
        break;

        case 2:
        rayon = 2 * PI * rayon;
        printf("Le perimetre du cercle est : %f", rayon);
        break;

        case 3:
        rayon = PI * rayon * rayon;
        printf("L'aire du cercle est : %f", rayon);
        break;
    }
    return 0;
}
