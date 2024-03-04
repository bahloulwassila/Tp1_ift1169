#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialisation du generateur de nombres aléatoires
    srand(time(NULL));

	// Tirage aléatoire d'une carte en sélectionnant une valeur et un symbole   
	int symboleCarte = rand() % 4;
    int valeurCarte = rand() % 13;


    // Utilisation d'instructions if imbriquées pour afficher la valeur de la carte
    
    printf("La carte tiree est");
    
	if (valeurCarte == 1) {
        printf(" l'as");
    } else if (valeurCarte > 1 && valeurCarte <= 10) {
        printf(" le %d", valeurCarte + 1); 
    } else if (valeurCarte == 11) {
        printf(" le valet");
    } else if (valeurCarte == 12) {
        printf(" la dame");
    } else {
        printf(" le roi");
    }

    // Utilisation de switch pour afficher le symbole de la carte 
    switch (symboleCarte) {
        case 0:
            printf(" de coeur");
            break;
        case 1:
            printf(" de carreau");
            break;
        case 2:
            printf(" de pique");
            break;
        case 3:
            printf(" de trefle");
            break;
        default:
            break;
    }
	
	    // Affichage de la carte (valeur + symbole) tirée
    printf("\n");
    
    return 0;
}

