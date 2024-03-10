#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int tempo[size];
    
    j = size - 1;
    i = 0;
    while(i < size)
    {
        tempo[j] = tab[i];
        j--;
        i++;
    }
    int c;
    
    c = 0;
    while(c < size)
    {
        tab[c] = tempo[c];
        c++;
    }
}

int main()
{
    int tab[4];

    tab[0] = 12;
    tab[1] = 8;
    tab[2] = 44;
    tab[3] = 26;
    ft_rev_int_tab(tab, 4);
    
    int a;
    a = 0;
    while(a < 4)
    {
        printf("%d\n", tab[a]);
        a++;
    }
    return(0);
}
