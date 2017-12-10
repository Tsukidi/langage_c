/*********************************
Exercice 40 : écrivez un programme qui demande à l'utilisateur "Entrez votre code secret : " suivi d'un retour à la ligne, puis attend
un entier, et affiche "Confirmez votre code secret : " (suivi d'un retour à la ligne) et attend un deuxième entier. Le programme doit
répéter ces deux questions, jusqu'à-ce que que l'utilisateur entre bien deux fois le même nombre, puis afficher "merci".
***********************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration et Initialization
    int code =0 , confirmation = 1;
    //Entree des donnees
    while( code != confirmation)
    {
        //Demander a nouveau le code et sa confirmation
        printf("\n\n Entrez votre code : ");
        scanf("%d", &code);
        printf("\n\n Entrez votre code une seconde fois pour confirmation : ");
        scanf("%d", &confirmation);
    }
    printf("BRAVO!\n");
    return 0;
}
