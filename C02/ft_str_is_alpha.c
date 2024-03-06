#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int r;
    int i;
    int A = 64;
    int Z = 91;
    int a = 96;
    int z = 123;

    i = 0;
    while(str[i] != '\0')
    {
        if((A < str[i] && Z > str[i]) || (a < str[i] && z > str[i]))
        {
            r = 1;
        }
        else
        {
            r = 0;
        }
        i++;
    }

    return(r);
}

int main()
{
    char *str = "Bien !!!!e bonjour";
    int ret;

    ret = ft_str_is_alpha(str);
    printf("%d\n", ret);

    return(0);
}
