#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        // printf("%d\n", str[i]);
        // if(('A' > str[i] || 'z' < str[i]) || (str[i] > 'Z' && str[i] < 'a'))
        if(str[i] < 'A' || 'z' < str[i] || (str[i] > 'Z' && str[i] < 'a'))
        {
            return(0);
        }
        i++;
    }

    return(1);
}

int main()
{
    char *str = "bien34lebonjour";
    int ret;

    ret = ft_str_is_alpha(str);
    printf("%d\n", ret);

    return(0);
}
