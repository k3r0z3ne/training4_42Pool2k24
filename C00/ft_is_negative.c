#include <unistd.h>

void    ft_is_negative(int n)
{
    n = 67;
    if(n >= 0)
    {
        write(1, "P\n", 2);
    }
    else
    {
        write(1, "N\n", 2);
    }
    // write(1, "\n", 1);
}

int main()
{
    // int v;

    // v = 67;
    ft_is_negative(67);
    return(0);
}
