#include <stdio.h>

int sommeTableau(int *tableau, int tailleTableau) // somme des valeurs contenues dans le tableau
{
    int result;
    int i;

    result = 0;
    i = 0;
    while   (i < tailleTableau)
    {
        result = result + tableau[i];
        i++;
    }
    return (result);
}

/*double moyenneTableau(int tableau[], int tailleTableau); // moyenne des valeurs contenue dans le tableau
{

}
*/

int main(int argc, char *argv[])
{
    int tableau[5] = {43, 8, 665, 12, 2};

    sommeTableau(tableau, 5);
    printf("%d\n", sommeTableau(tableau, 5));
    return (0);
}
