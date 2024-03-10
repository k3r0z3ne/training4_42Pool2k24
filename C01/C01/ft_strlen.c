#include <stdio.h>
#include <unistd.h>

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
    char *chaine = "conversationnnnnnnnn";

    ft_strlen(chaine);
    printf("%d\n", ft_strlen(chaine));
    return(0);
}