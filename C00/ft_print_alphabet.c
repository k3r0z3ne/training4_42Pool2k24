#include <unistd.h>

void    ft_print_alphabet(void)
{
    int a;

    a = 97;
    while(a <= 122)
    {
        write(1, &a, 1);
        a++;
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_alphabet();
    return(0);
}
