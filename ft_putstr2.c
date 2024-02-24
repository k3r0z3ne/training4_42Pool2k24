#include <unistd.h>
#include <stdio.h>

int ft_putstr(char *str)
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
        // return(1);
    }
    return(0);
}

int main()
{
    char *chain = "boooooooo";
    int box;

    box = ft_putstr(chain);
    printf("%d\n", box);

    return(0);
}
