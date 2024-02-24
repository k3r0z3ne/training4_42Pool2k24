#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // équivalent de int main
{
    int joursRestants; // déclaration de la variable
    joursRestants = 13; // affectation de la variable

    int niveauDeSanté;
    niveauDeSanté = 4.5;
	
    printf("Il vous reste %d jours, niveau de santé à %d\n", joursRestants, niveauDeSanté);
    printf("3 jours plus tard\n");
    joursRestants = 9, niveauDeSanté = 1.5;
    printf("%d restants... L'heure tourne.\nNiveau de santé critique, %d restant\n", joursRestants, niveauDeSanté);
    
    return 0;
}

/*
const int JOURS_RESTANTS = 15; déclaration d'une variable constante, par convetion écrites en MAJUSCULES avec '_' en guise d'espace
*/