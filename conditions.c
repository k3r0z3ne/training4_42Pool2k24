#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int age;

	age = 90;
	if (age >= 18)
	{
		printf("Vous etes majeur!\n");
	}
	else if (age >= 13)
	{
		printf("L'age ingrat...\n");
	}
	else
	{
		printf("Où sont tes parents ?\n");
	}
	return (0);
}
