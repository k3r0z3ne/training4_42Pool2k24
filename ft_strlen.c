#include <stdio.h>
// #include <stddef.h>

int ft_strlen(char *str)
{
    int i;
    int nombre;

    i = 0;
    nombre = 0;

    if(str != NULL)
    {
        while(str[i] != '\0')
        {
            nombre++;
            i++;
        }
    }
    return(nombre);
}

int main()
{
    char *chain;
    int ret;

    chain = "Aigle du désert dans le holster";
    ret = ft_strlen(chain);
    printf("%d\n", ret);

    return(0);
}
