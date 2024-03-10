#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] < 'A' || str[i] > 'Z')
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int main()
{
    char *str = "FANMSEDYAB";
    int ret;

    ret = ft_str_is_uppercase(str);
    printf("%d\n", ret);

    return(0);
}
