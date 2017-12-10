/**********************
Exercice 35 : Jour d’une date:
Ecrivez un programme qui calcule le jour de la semaine correspondant à une date donnée, exprimée sous la forme de trois nombres j
(jour), m (mois), a (année).
Le jour de la semaine est donné par le reste r de la division de f par 7 : r = f % 7 (r = 0 : dimanche, r = 1 : lundi, .etc.).
Attention, il peut arriver que la valeur def et donc r soit négative, auquel cas remplacer r par r+7.
***************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialisation et Realisation
    unsigned j, a, m;   //Jour Annee Mois
    int joursemaine;    //reste pour determiner le jour


    printf("Entrez la date sous la forme j m a :\n");   //Entrer les valeurs par l'utilisateur
    scanf("%d" "%d" "d", &j, &m, &a);
    joursemaine = (a - 1) * 365;    //Le reste sera l'annee - 1 * 365 car l'annee peut etre bissextille ou pas

    if (a > 1582)   //Il existe deux types de calendrier si l'annee est > 1582 alors il faut qu'il soit multiple de 4 et de  400 mais pas de 100
    {
        joursemaine += ((a - 1) / 4);
        joursemaine -= ((a - 1) / 100);
        joursemaine += ((a - 1) / 400);
        joursemaine += 2;
    }

    else
    {
        joursemaine += ((a - 1) / 4);
        joursemaine += ((m - 1) * 31);
    }

    switch (m)
    {
    case 12:
        --joursemaine;
    case 11:
    case 10:
        --joursemaine;
    case 9:
    case 8:
    case 7:
        --joursemaine;
    case 6:
    case 5:
        --joursemaine;
    case 4:
    case 3:
        if (a > 1582)   //le calendrier > 1582 il existe les annees bissextille et non bissextille
        {
            if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
                joursemaine -= 2;
            else
                joursemaine -= 3;
        }
        else
        {
            if (a % 4 == 0)
                joursemaine -= 2;
            else
                joursemaine -= 3;
        }
        break;

    }

    joursemaine += (j - 1);

    switch (joursemaine % 7)
    {
        case 0:
        printf("C'est un samedi\n");
        break;

        case 1:
        printf("C'est un dimanche\n");
        break;

        case 2:
        printf("C'est un lundi\n");
        break;

        case 3:
        printf("C'est un mardi\n");
        break;

        case 4:
        printf("C'est un mercredi\n");
        break;

        case 5:
        printf("C'est un jeudi\n");
        break;

        case 6:
        printf("C'est un vendredi\n");
        break;

    }

    return 0;
}
