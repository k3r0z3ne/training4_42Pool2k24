#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    if(str != NULL)
    {
        while(str[i] != '\0')
        {
            write(1, &str[i], 1);
            i++;
        }
        write(1, "\n", 1);

    }
}

int main()
{
    char *chain = NULL;

    ft_putstr(chain);
    return(0);
}
