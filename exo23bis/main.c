/****************************************
Exercice 23 Bis : Ecrire un programme qui lit 3 nombres et affiche le maximum des 3 nombres.
*******************************************/

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	nb1 = 0;
	int	nb2 = 0;
	int	nb3 = 0;

	printf("Entrer  3 nombres entiers a trier: ");
	scanf("%d %d %d", &nb1, &nb2, &nb3);

	if (nb1 > nb2)
	{
		if (nb2 > nb3)
			printf("%d < %d < %d\n", nb3, nb2, nb1);

		else
			printf("%d < %d < %d\n", nb2, nb1, nb3);
	}

	else if (nb2 > nb3)
	{
		if (nb1 > nb3)
			printf("%d < %d < %d\n", nb3, nb1, nb2);

		else
			printf("%d < %d < %d\n", nb1, nb3, nb2);
	}

	else
		printf("%d < %d < %d\n", nb1, nb2, nb3);

	return(0);
}
