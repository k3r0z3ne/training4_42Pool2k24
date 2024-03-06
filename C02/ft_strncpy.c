#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[n] = '\0';

    return(dest);
}

int ft_strlen(char *srt)
{
    int i;

    i = 0;
    while(srt[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main()
{
    char *src = "elle est tombée sur un trapboy :/";
    char *ret;
    unsigned int n;
    
    n = ft_strlen(src);
    char dest[n+1];
    
    ret = ft_strncpy(dest, src, n);
    printf("%s\n", ret);
    return(0);
}
