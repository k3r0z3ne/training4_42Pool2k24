#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // signale la fin de la chaine de caractères, à écrire quand tableau ou chaines

    return(dest);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main()
{
    char *src = "je suis fan de MNG!";
    char *ret;
    int len;
    
    len = ft_strlen(src);
    char dest[len+1];

    ret = ft_strcpy(dest, src);
    printf("%s\n", ret);
    return(0);
}
