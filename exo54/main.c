/*********************
Exercice 54 : Saisir les notes d'un élève et donner la moyenne. Il y a 5 notes par élève. Il faut contrôler si les notes se trouvent bien
entre 0 et 20 inclus. Si une note non valide est saisie, on affiche un message d'erreur du type " Note non valide " et on ne compte pas
cette note.
************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note;
    int moyenne;
    int somme;

    while (note >= 0)
    {
    printf("Saisissez 5 notes d'un eleve : \n");
    scanf("%d", &note);
    break;

        if ( note >= 21)
        {
        printf("Note non valide");
        }
    }

    somme = note + note + note + note + note;
    moyenne = somme / 5;
    printf("Moyenne : %d ", moyenne);

    return 0;
}
