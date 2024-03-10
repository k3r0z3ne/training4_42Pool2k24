#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        // printf("%d\n", str[i]);
        if(str[i] < 48 || str[i] > 57)
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int main()
{
    char *str = "14'(84";
    int ret;

    ret = ft_str_is_numeric(str);
    printf("%d\n", ret);

    return(0);
}
