#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int tmp;

    i = 0;
    tmp = 0;
    while(i < size / 2) // il y une boucle while que si incrémentation sinon = boucle inf
    {
        tmp = tab[size - 1 - i]; // tmp prend la valeur contenue à l'adresse tab[i]
        tab[size - 1 - i] = tab[i];
        tab[i] = tmp; // la variable à gauche prend la valeur de celle de droite
        i++;
    }
    // printf("%d\n", tmp);
}

int main()
{
    int tab[5];

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;

    ft_rev_int_tab(tab, 5);

    int a;
    a = 0;
    while(a < 5)
    {
        printf("%d\n", tab[a]);
        a++;
    }
    return(0);
}
