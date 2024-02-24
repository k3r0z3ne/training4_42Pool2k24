#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int c = 14;
    int d = 5;

    *a = c / d;
    *b = c % d;
}

int main()
{
    int a;
    int b;

    a = 0;
    b = 0;
    ft_ultimate_div_mod(&a, &b);
    printf("*a : %d\n*b : %d\n", a, b);
    return(0);
}
