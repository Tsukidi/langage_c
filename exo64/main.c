/***********************
Exercice 64 :
1) Ecrire un algorithme qui demande successivement 10 nombres entiers positifs �
l�utilisateur, et qui lui dise ensuite quel �tait le plus grand parmi ces 10 nombres :
Exemple d��dition :
Entrez le nombre num�ro 1 : 12
Entrez le nombre num�ro 2 : 14
etc.
Entrez le nombre num�ro 10 : 6
Le plus grand de ces nombres est : 14
***************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int number;

    for (i=1; i<=10; i++)
    {
        printf("Entrez le nombre numero %d :", i);
        scanf("%d", &number);
    }
    if (number > i)
    {
        printf("Le plus grand de ces nombres est : %d", number);
    }
    return 0;
}
