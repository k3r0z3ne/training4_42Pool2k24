#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    str[i] = '\0';

    return(str);
}

int main()
{
    char str[14] = "canemarchepas";
    char *ret;

    ret = ft_strupcase(str);
    printf("%s\n", ret);

    return(0);
}
