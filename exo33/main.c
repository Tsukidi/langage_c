/**************************
Exercice 33 : Compter le temps qui passe:
L�instruction x=time(NULL); affecte � la variable x de type time_t (un entier long), le nombre de secondes �coul�es depuis
le 1er janvier 1970. Cette fonction permet par exemple de mesurer des intervalles de temps. Il suffit pour cela de l�appeler au d�but et
� la fin de l�intervalle avec deux variables diff�rentes et de faire la diff�rence entre les deux valeurs ainsi obtenues. Cette fonction est
d�clar�e dans le fichier time.h
Faire un chronom�tre qui fonctionne de la fa�on suivante. Quand on tape la touche RETURN, le programme lit la valeur du compteur
de secondes. Puis une nouvelle fois quand on retape la
m�me touche. Affichez des informations qui indiquent
� l�utilisateur comment utiliser le chronom�tre.
Note : Pour lire une valeur a l��cran, on utilise
l�instruction scanf("%d",&valeur); Pour ne lire
que la touche RETURN au clavier, utiliser la fonction
getchar().
********************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t debut;
    time_t fin;
    double difference;

    debut = time(NULL);
    printf("Pressez RETURN pour demarrer le chronometre\n");
    getchar();

    if (getchar())
    {
        printf("Pressez RETURN pour arreter le chronometre\n");
    }

    fin = time(NULL);
    difference = difftime(fin, debut);
    printf("Duree : %f secondes\n", difference);
    scanf("%f", &difference);

    return 0;
}
