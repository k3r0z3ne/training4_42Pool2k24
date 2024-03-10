#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    int number;
    number = 42;
    *********nbr = number;
}

int main()
{
    int a;
    int *********nbr;
    int ********nbr1;
    int *******nbr2;
    int ******nbr3;
    int *****nbr4;
    int ****nbr5;
    int ***nbr6;
    int **nbr7;
    int *nbr8;

    // *nbr8 = a;
    nbr8 = &a;
    nbr7 = &nbr8;
    nbr6 = &nbr7;
    nbr5 = &nbr6;
    nbr4 = &nbr5;
    nbr3 = &nbr4;
    nbr2 = &nbr3;
    nbr1 = &nbr2;
    nbr = &nbr1;

    ft_ultimate_ft(nbr);
    // printf("%d\n", a);
    printf("%d\n", *********nbr);
    return(0);
}

// int a = 3;
// int *aa = &a;
// int *aaa = &aa;
// int b = **aaa;