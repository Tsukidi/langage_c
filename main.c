/***********************
Exercice 92-2 : Nous utiliserons une constante globale pour définir la taille maximum des tableaux "tab"
utilisés par le programme suivant: const int SIZE_MAX = 100; On appellera n la taille "réelle" du
tableau : n <= SIZE_MAX. Par exemple n sera initialisé à 10. Ecrivez les fonctions suivantes et testez les
dans la fonction main :
1) fonction qui crée le tableau tab de taille n en le remplissant aléatoirement par des entiers entre 0
et 100. Cette fonction aura deux paramètres : le tableau et sa taille.
2) fonction qui crée le tableau tab de taille n en le remplissant par des entrées au clavier.
3) fonction qui affiche le tableau tab.
4) fonction qui retourne le nombre d'éléments du tableau tab divisibles par k.
5) fonction qui calcule et retourne la somme des éléments du tableau
6) fonction qui retourne la moyenne des éléments du tableau
7) fonction qui décale les éléments de tab d'une position vers la gauche. L'élément à l'indice i se
retrouve à l'indice i-1, et le premier élément du tableau se retrouve à la dernière place. Par
exemple, si le tableau contenait les valeurs: 1 2 3 4 5 (avec n = 5), il contiendra 2 3 4 5 1 après
ce décalage.
8) fonction qui détermine et affiche le minimum des valeurs du tableau tab et le nombre de fois où
il apparaît.
9) fonction qui trie le tableau tab par le tri sélection.
10) fonction qui trie le tableau tab par le tri bulle.
11) fonction qui trie le tableau tab par le tri par insertion.
12) fonction qui ajoute un élément lu au clavier en fin de tableau et retourne la nouvelle taille du
tableau
****************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE_MAX 100    ///definir une taille maximale du tableau
#include <time.h>

///Declaration des fonctions
void initTabAlea (int[], int);   ///tab, n
void initTabClavier (int[], int);   ///tab, n
void edition (int[], int);  ///tab, n
int  nbDivisiblePark(int[], int, int); /// tab, n, k
int somme(int[], int);      ///tab, n
void decalageGauche (int tab[], int n);  ///tab, n
float moyenne (int tab[], int); ///tab, n
void minTab (int[], int);
int trouve_x_des_tab(int[], int, int);
void triSelection (int[], int); ///tab, n

///Fonction principale
int main()
{
    ///initialiser le generateur aleatoire
    srand(time(0));

    int n = 10; ///Taille courante du tableau
    int tab[SIZE_MAX];


    ///test question 1 et 2
    printf ("\n\nCreation du tableau tab de taille %d", n);
    initTabAlea (tab, n);

    printf("\n\nQuelle methode voulez vous utiliser? 1 pour aleatoire, 2 pour manuel");
    int methode = 0;
    scanf("%d", &methode);
    if (methode == 1) { initTabAlea (tab, n);}
    else if (methode == 2) {initTabClavier(tab, n);}
    else {printf("\nErreur sur le choix de la methode : choix aleatoire choisi");
            initTabAlea(tab, n);}

    ///test de la question 3
    edition(tab, n);

    ///test question 4
    int k = 2;
    printf ("\n\nLe nombre d'elements divisibles par %d est : %d", k, nbDivisiblePark(tab, n, k));

    ///test de la question 5
    printf ("\n\nLa somme des elements du tableau est : %d", somme(tab, n));

    ///test de la question 6
    printf("\n\nLa moyenne des elements du tableau est : %.2f", moyenne(tab, n));

    ///test de la question 7
    decalageGauche(tab, n);
    printf("\n\nTableau decale vers la Gauche : ");
    edition(tab, n);

    ///test question 8 avec min
    minTab(tab, n);

    ///test de la question 9
    printf("\n\nTrier le tableau :");
    triSelection(tab, n);
    edition(tab, n);

    ///test question 13
    printf("\n\nEntrez la valeur recherchee: ");
    int x;
    scanf("%d", &x);
    printf("\nLa position de %d dans tab est : %d", x, trouve_x_des_tab(tab, n, x));
    return 0;
}


///Definition des fonctions

///*Q1*///
void initTabAlea (int tab[], int n)
{
    int i;
    for (i=0; i>n; i++)
    {
        ///creer tab [i] de façon aleatoire
        tab[i] = rand()%101;
    }
}

///*Q2*///
void initTabClavier (int tab[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        ///Lire au clavier tab[i]
        printf("\n\nEntrer l'element entier numero %d au clavier :", i);
        scanf("%d", &tab[i]);
    }
}

///*Q3*///
void edition (int tab[], int n)
{
    int i;
    printf("\n\nEdition du tableau:");
    for (i=0; i<n; i++)
    {
        ///editer tab [i]
        printf("%d, ", tab[i]);
    }
    printf("\n\n");
}
///* Q4 *///
    int  nbDivisiblePark(int tab[], int n, int k){
    int i;
    int compt = 0;
    for (i = 0; i<n; i++){
    if(tab[i]%k == 0){
        compt++;
    }
    ///if (!tab[i]%k)
}
    return compt;
   }

///*Q5*///
int somme (int tab[], int n){
    int i;
    int somme = 0;
    for ( i = 0; i < n; i++){
    ///cumuler tab[i] dans somme
    somme += tab[i];
    }
    return somme;
    }

///*Q6*///
float moyenne (int tab[], int n)
{
    float moyenne = 0.0;
    if (n > 0) {
    moyenne = (float)somme(tab, n)/n; }
    else {printf("\nAttention pas d'elements dans le tableau\n\n"); }
    return moyenne;
}

///Q7///
void decalageGauche (int tab[], int n){
    if (n>=2) { ///il y a au moins 2 elements
    int i;
    int memoriser;
    memoriser = tab[0];
    for (i = 1; i < n; i++)
    {
        tab[i-1] = tab[i];
    }
    tab [n - 1] = memoriser;
    }
    else {printf("Moins de 2 elements: pas de decalage a faire !\n\n");}

}

///Q8///
void minTab(int tab[], int n)
{
    ///Determiner le minimum de tab
    ///au depart on a lu uniquement tab[0]
    if (n > 0) {
    int min = tab[0];
    int nbMin = 1;
    int i;
    for (i = 1; i < n; i++)
    {
        ///on lit tab[i] et on le compare a min
        if (tab[i] < min)
        {
            ///on a trouve un nouveau min
            min = tab[i];
            nbMin = 1;
        }
        else if (tab[i] == min)
        {
            ///on a trouve le min une fois plus
            nbMin++;
        }
        else {///rien///
        }
    }
    printf("\n\nLe min est %d, atteint %d fois", min, nbMin); }
    else
    {
        printf("\n\nPas d'elements dans le tableau, pas de minimum");
    }

}

///Q13///
int trouve_x_des_tab(int tab[], int n, int x)
{
    ///on doit retourner la position de x dans tab et -1 si x n'est pas dans tab
    int adresse = -1;
    ///je cherche l'adresse x
    int i;
    for (i = 0; i < n; i++)
    {
        ///traiter table[i]
        if (tab[i] == x)
        {
            adresse = i;
            return adresse;
        }
    }
    return adresse;
}

///Q9///
triSelection(int tab[], int n)
{
    ///variable locales
    int i, j;
    int posMin;
    for (i = 0; i < n-1; i++)
    {
        ///on traite le sous tableau entre la position i et la position n -1
        ///chercher le minimum du sous tableau[i.....n-1]
        posMin = i;
        for (j = i+1; j < n; j++)
        {
            ///tab[j] est-il le plus petit
            if ( tab[j] < tab[posMin])
            {
                posMin = j;
            }
        }
        ///permuter les deux elements de tab[i] et tab[posMin]
        int temps = tab[i];
        tab[i] = tab[posMin];
        tab[posMin] = temps;
    }
}

