/***************************
Exercice 72 : Afficher un triangle rempli d'�toiles, s'�tendant sur un nombre de lignes fourni en donn�e.
************************/

#include <stdio.h>

int	main()
{
    //Initialisation et Realisation
	int	N = 0;  //Valeur que la personne tapera
	int	i = 1;  //Valeur qui correspond comme un index
	int	mem = 1;    //Valeur qui memorise la valeur

    //Ecrire une valeur que la personne souhaite
	printf("Veuillez entrer le numero de lignes : ");
	scanf("%d", &N);

    //Creation du triangle
	while (mem != N + 1)
	{
		while (i != 0)
		{
			printf("*");
			i--;
		}
		printf("\n");
		mem++;
		i = mem;
	}

	printf("\n");
	return 0;
}



