#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
    write(1, "\n", 1);
}

int main()
{
    ft_putchar('f');
    return(0);
}

//     if( c =! NULL)