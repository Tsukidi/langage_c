/****************************
Exercice 73 : Faire un cercle
(x - (N / 2)) * (x - (N / 2)) + (y - (N / 2)) * (y - (N / 2)
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int y = 0;
    int number = 0;
    int mem_number = 0;
    int memory = 0;

    printf("Entrez un numero :\n");
    scanf("%d", &number);
    mem_number = number;
    memory = number;
    while (mem_number > 0)
    {
        while (number > 0)
        {
            if ((x - (memory / 2)) * (x - (memory / 2)) + (y - (memory / 2)) * (y - (memory / 2)) < memory * (memory / 4))
            {
                printf(" #");
            }
            else
            {
                printf("  ");
            }
            y++;
            number--;
        }
        printf("\n");
        x++;
        mem_number--;
        y = 0;
        number = memory;
    }
    printf("\n\n");
    return 0;
}
