/***************
Exercice 17 : calcul de durées
Ecrire un programme qui détermine la somme de
trois mesures de temps données en heures,
minutes et secondes et qui donne le résultat en
jours, heures, minutes et secondes.
****************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jours = 0;
    int heures = 0;
    int secondes = 0;
    int minutes = 0;

    int mine_heures = 0;
    int mine_secondes = 0;
    int mine_minutes = 0;

    printf("Veuillez entrer la duree du premier temps en 'Heures' 'Minutes' 'Secondes' : \n");
    scanf("%d" "%d" "%d", &mine_heures, &mine_minutes, &mine_secondes);
    heures = heures + mine_heures;
    minutes = minutes + mine_minutes;
    secondes = secondes + mine_secondes;

    printf("Veuillez entrer la duree du deuxieme temps en 'Heures' 'Minutes' 'Secondes' : \n");
    scanf("%d" "%d" "%d", &mine_heures, &mine_minutes, &mine_secondes);
    heures = heures + mine_heures;
    minutes = minutes + mine_minutes;
    secondes = secondes + mine_secondes;

    printf("Veuillez entrer la duree du troisieme temps en 'Heures' 'Minutes' 'Secondes' : \n");
    scanf("%d" "%d" "%d", &mine_heures, &mine_minutes, &mine_secondes);
    heures = heures + mine_heures;
    minutes = minutes + mine_minutes;
    secondes = secondes + mine_secondes;

    while ( heures >= 24)
    {
        heures = heures - 24;
        jours++;
    }
    while ( minutes >= 60)
    {
        minutes = minutes - 60;
        heures++;
    }
    while ( secondes >= 60)
    {
        secondes = secondes - 60;
        minutes++;
    }

    printf("%d Jours %d Heures %d Minutes %d Secondes", jours, heures, minutes, secondes);

    return 0;
}
