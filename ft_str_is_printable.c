#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        // printf("%d\n", str[i]);
        if(str[i] < 32)
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int main()
{
    char *str = "fzi56";
    int ret;

    ret = ft_str_is_printable(str);
    printf("%d\n", ret);
    
    return(0);
}
