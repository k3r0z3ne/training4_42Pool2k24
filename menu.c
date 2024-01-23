#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv)
{
	int	choix_menu;

	choix_menu = 1;
	choix_menu = 2;
	choix_menu = 3;
	choix_menu = 4;
	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("Votre choix ?\n");
	scanf("%d", &choix_menu);
	switch (choix_menu)
	{
		case 1:
			printf("Vous avez choisi le Royal Cheese\n");
		break ;
		case 2:
			printf("Vous avez choisi le Mc Deluxe\n");
		break ;
		case 3:
			printf("Vous avez choisi le Mc Bacon\n");
		break ;
		case 4:
			printf("Vous avez choisi le Big Mac\n");
		break ;
		default :
			printf("Veuillez choisir un de nos 4 plats disponibles\n");
		break ;
	}
	return (0);
}
