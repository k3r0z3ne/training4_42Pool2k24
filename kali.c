#include <stdio.h>
#include <stdlib.h>

// Ecrire une fonction qui echange le contenu de 2 entiers dont les adresses sont donnees en parametres

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("La valeur de 'a' est %d\nLa valeur de 'b' est %d\n", a, b);
	return(0);
}
