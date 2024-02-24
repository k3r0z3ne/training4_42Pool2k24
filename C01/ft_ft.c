#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int nombre;
    
    nombre = 10000;
    ft_ft(&nombre); // 
    // printf("%d\n", nombre);
    return(0);
}
