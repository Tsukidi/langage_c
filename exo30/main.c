/*******************
Exercice 30 : Ecrire un algorithme qui demande l’âge d’un enfant à l’utilisateur. Ensuite, il l’informe de sa catégorie :
• "Poussin" de 6 à 7 ans
• "Pupille" de 8 à 9 ans
• "Minime" de 10 à 11 ans
• "Cadet" après 12 ans
***********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    printf("Veuillez introduire l'âge d'un enfant : \n");
    scanf("%d", &N);

    if (N == 6 || N == 7)
    {
        printf("Poussin");
    }
        else if (N == 8 || N == 9)
    {
        printf("Pupille");
    }

        else if(N == 10 || N == 11)
    {
        printf("Minime");
    }

        else if (N >= 12)
    {
        printf("Cadet");
    }

    return 0;
}
