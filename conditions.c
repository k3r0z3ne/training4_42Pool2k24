#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int age;

	age = 17;
	if (age >= 18)
	{
		printf("Vous etes majeur!\n");
	}
	else if (age > 13)
	{
		printf("L'age ingrat...\n");
	}
	else
	{
		printf("Ou sont tes parents ?\n");
	}
	return (0);
}
