#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    // a = 14;
    // b = 5;
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a = 14;
    int b = 5;
    int div = 0;
    int mod = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("result of div : %d, result of mod : %d\n", div, mod);
    return(0);
}
