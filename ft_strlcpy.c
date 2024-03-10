#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[size] = '\0';

    return(size);
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
    char src[12] = "booboob!nks";
    unsigned int size;
    unsigned int ret;

    size = ft_strlen(src);
    char dest[size+1];
    ret = ft_strlcpy(dest, src, size);
    printf("%d\n", ret);

    return(0);
}
