/* float calculPrixTTC(float prixHT, float tva);
Rappel : il y a 3 étapes, déclaration de la fonction, 
définition de la fonction (code) et utilisation dans le programme principal "main()" ou une autre fonction.
*/

#include <stdio.h>
#include <stdlib.h>

float calculPrixTTC(float prixHT, float TVA)
{
	float ret;

	ret = prixHT * TVA;
	return (ret);
}

int	main(int argc, char *argv)
{
	float prixHT = 0;
	float TVA = 1.2;
	float ret2;

	printf("Entrez le Prix HT\n");
	scanf("%f", &prixHT);
	printf("Le prix TTC est %f\n", calculPrixTTC(prixHT, TVA));
	// ret2 = calculPrixTTC(prixHT, TVA);
	// printf("Le prix TTC est %f€\n", ret2);
	return (0);
}
