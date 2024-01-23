#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv)
{
	int	solde;
	int	age;

	solde = 26000;
	age = 99;
	if (solde >= 25000 && age < 19)
	{
		printf("Un joli pactole\n");
	}
	else if (solde >= 100000 && age <= 40)
	{
		printf("Vous devez investir!\n");
	}
	else
	{
		printf("La banque ne peut rien pour vous\n");
	}
	return (0);
}
