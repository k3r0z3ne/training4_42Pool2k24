#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    if(str != NULL)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
        while(str[i] != '\0')
        {
            if((str[i-1] < 'a' || str[i-1] > 'z') && (str[i-1] < 'A' || str[i-1] > 'Z') && (str[i-1] < '0' || str[i-1] > '9')) // si str[i] est 1ere lettre du mot
            {
                if(str[i] >= 'a' && str[i] <= 'z') // si la 1ere lettre est une minuscule
                {
                    str[i] = str[i] - 32; // passe la lettre en majuscule
                }
            }
            else // si str[i] n'est pas la 1ere lettre du mot
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] = str[i] + 32;
                }
            }
            i++;
        }
        str[i] = '\0';
    }
    return(str);
}

int main()
{
    char str[] = "pamplemousse, tout vert! :-)";
    char *ret;

    ret = ft_strcapitalize(str);
    printf("%s\n", ret);

    return(0);
}
