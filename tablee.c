#include <stdio.h>

int main(int argc, char *argv[])
{
    int tableau[6];
    int i;
    // (autre manière d'initialiser le tableau) int tableau[6] = {99, 26, 777, 1, 1209, 87};
    i = 0;
    tableau[0] = 99;
    tableau[1] = 26;
    tableau[2] = 777;
    tableau[3] = 1;
    tableau[4] = 1209;
    tableau[5] = 87;

    for (i = 0 ; i < 6 ; i++)
    {
        printf("%d\n", tableau[i]);
    }
    /* printf("La valeur de la premiere case est %d\n", *tableau);
    printf("La valeur de la seconde case est %d\n", *(tableau + 1));
    */
    return (0);
}
