#include <stdio.h>

double moyenneTableau(int tableau[], int tailleTableau) // moyenne des valeurs contenue dans le tableau
{
    int moyenne;
    int i;
    
    moyenne = 0;
    i = 0;
    while (i < tailleTableau)
    {
        moyenne = moyenne + tableau[i];
        i++;
    }

    moyenne = moyenne / tailleTableau;
    return (moyenne);
}

int main(int argc, char *argv[])
{
    int tableau[4] = {2, 78, 4, 5};

    moyenneTableau(tableau, 4);
    printf("%f\n", moyenneTableau(tableau, 4));

    return (0);
}
