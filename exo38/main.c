/******************
Exercice 38 : écrivez un programme qui :
• Déclare une variable "code" (initialisée à 0) qui contiendra le code entré par
l'utilisateur au clavier.
• Tant que le code entré par l'utilisateur n'est pas celui recherché (456) :
o Demander à l'utilisateur de taper son code secret
o Stocker l'entier tapé par l'utilisateur dans cette variable code
o Recommencer la boucle
• Affiche à la fin un message indiquant que le code secret a été trouvé.
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
