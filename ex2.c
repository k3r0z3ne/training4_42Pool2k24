#include <stdio.h>
#include <stdlib.h>

int tabPairs(int *tableau, int tailleTab)
{
    int i;
    int number;

    i = 0;
    number = 0;
    while (i < tailleTab)
    {
        if (tableau[i] % 2 == 0)
        {
            printf("%d\n", tableau[i]);
            number = number + 1;
        }
        i++;
    }
    return (number);
}

int main(int argc, char *argv[])
{
    int tab[6] = {9, 18, 678, 22, 1, 40};
    int boite;

    boite = tabPairs(tab, 6);
    printf("Le nombre de pairs dans ce tableau est : %d\n", boite);
    return (0);
}
