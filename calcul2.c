#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	resultat;
	int	nombre1;
	int	nombre2;
	int	nombre3;

	resultat = 0;
	nombre1 = 0;
	nombre2 = 0;
	nombre3 = 0;
	printf("Entrez la valeur [1]\n");
	scanf("%d", &nombre1);
	printf("Entrez la valeur [2]\n");
	scanf("%d", &nombre2);
	printf("Entrez la valeur [3]\n");
	scanf("%d", &nombre3);
	resultat = nombre1 * nombre2 / nombre3;
	printf("%d * %d / %d = %d\n", nombre1, nombre2, nombre3, resultat);
	return (0);
}
