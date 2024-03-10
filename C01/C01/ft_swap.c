#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;

    b = &c;
    a = b;
    c = *a;
}

int main()
{
    int a = 1;
    int b = 2;
    ft_swap(&a, &b); // envoie d'adresses dans la fonction car les paramètres reçus sont des pointeurs
    printf("a = %d\nb = %d\n", b, a);
    return(0);
}
