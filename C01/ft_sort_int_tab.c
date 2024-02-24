#include <stdio.h>

void    ft_sortint_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp[size];

    j = size - 1;
    i = 0;
    while(i < size)
    {
        tmp[j] = tab[i];
        i++;
    }
    while(tmp[j-1] < tmp[j] < tmp[j+1])
    {
        
    }

}

int main()
{   
    int tab[5];

    tab[0] = 13;
    tab[1] = 7;
    tab[2] = 65;
    tab[3] = 178;
    tab[4] = 9;

    ft_sortint_tab(tab, 5);
    return(0);
}