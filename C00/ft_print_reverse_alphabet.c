#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    int z;

    z = 122;
    while(z >= 97)
    {
        write(1, &z, 1);
        z--;
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_reverse_alphabet();
    return(0);
}