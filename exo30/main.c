/*******************
Exercice 30 : Ecrire un algorithme qui demande l��ge d�un enfant � l�utilisateur. Ensuite, il l�informe de sa cat�gorie :
� "Poussin" de 6 � 7 ans
� "Pupille" de 8 � 9 ans
� "Minime" de 10 � 11 ans
� "Cadet" apr�s 12 ans
***********************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    printf("Veuillez introduire l'�ge d'un enfant : \n");
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
