#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        // printf("%d\n", str[i]);
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    str[i] = '\0';

    return(str);
}

int main()
{
    char str[22] = "JAICELLEQUETUPREFERES";
    char *ret;

    ret = ft_strlowcase(str);
    printf("%s\n", ret);
    
    return(0);
}
