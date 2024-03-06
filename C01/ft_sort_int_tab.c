#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int k;

    i = 0;
    j=i+1;
    while(i < size - 1)
    {
        //j = i+1;
        while(j < size)
        {
            if(tab[i] > tab[j])
            {
                k = tab[i];
                tab[i] = tab[j];
                tab[j] = k;
            }
            j++;
            printf("%d\n", tab[j]);
        }
        i++;
    }
    
    // int t = 0;
    // while(t < size)
    // {
    // printf("%d\n", tab[t]);
    // t++;
    // }
}

int main()
{
    int tab[5];

    tab[0] = 13;
    tab[1] = 7;
    tab[2] = 65;
    tab[3] = 178;
    tab[4] = 9;
    ft_sort_int_tab(tab, 5);
    return(0);
}
