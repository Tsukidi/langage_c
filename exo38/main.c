/******************
Exercice 38 : �crivez un programme qui :
� D�clare une variable "code" (initialis�e � 0) qui contiendra le code entr� par
l'utilisateur au clavier.
� Tant que le code entr� par l'utilisateur n'est pas celui recherch� (456) :
o Demander � l'utilisateur de taper son code secret
o Stocker l'entier tap� par l'utilisateur dans cette variable code
o Recommencer la boucle
� Affiche � la fin un message indiquant que le code secret a �t� trouv�.
****************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	code = 456;
	int	essai_code = 0;

	while (code != essai_code)
	{
        	printf("Entrez le code secret numerique : ");
        	scanf("%d", &essai_code);
	}
	printf("BRAVO! Vous avez trouve le code secret!\n");
	return 0;
}
