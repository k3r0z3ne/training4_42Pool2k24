#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	nature;

	nature = 0;
	printf("If Human, press [1]\n");
	scanf("%d", &nature);
	if (nature == 1)
	{
		printf("VERIFYING YOUR NATURE\nPlease wait, it won't be long...\n");
	}
	else
	{
		printf("Sorry this program is dedicated for HUMANS, please leave.\n");
	}
	/*
    if(&sexe == 1)
    {
        printf("Bonsoir Monsieur.\n");
    }
    else if(&sexe == 2)
    {
        printf("Bonsoir Madame.\n");
    }
    */
	return (0);
}
