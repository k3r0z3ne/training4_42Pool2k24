#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int resultat = 0, nombre1 = 0, nombre2 = 0;
    printf("Entrez le nombre [1]\n");
    scanf("%d", &nombre1);

    printf ("Entre le nombre [2]\n");
    scanf("%d", &nombre2);

    resultat = nombre1 + nombre2;

    printf("%d + %d = %d\n", nombre1, nombre2, resultat);

    return 0;
}