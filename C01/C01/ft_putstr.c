#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main()
{
    char *chain;
    chain = "Dottore";

    ft_putstr(chain);
    return(0);
}


// #include <stdio.h>
// #include <unistd.h>
// 
// void    ft_putstr(char *str)
// {
//     int i;
// 
//     i = 0;
//     while(i < '\0')
//     {
//         write(1, &str, 1);
//         i++;
//     }
// }
// 
// int main()
// {
//     char *chain = "Dottore";
//     ft_putstr(chain);
//     // printf("%s\n", chain);
//     return(0);
// }
