#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /*Creation des variables pour stocker les chiffres de la loterie*/
    int nbreAleatoire1; 
    int nbreAleatoire2;
    int nbreAleatoire3;

    /*Initialisation du generateur de nombres aléatoires*/
    srand(time(NULL)); 
    
    /*affectation d'un chiffre aleatoirement choisi à une variable donnée*/
    nbreAleatoire1 = rand ()%10;
    nbreAleatoire2 = rand ()%10;
    nbreAleatoire3 = rand ()%10;

    /*Affichage du résultat*/
    printf("Le tirage de la quotidienne a 3 chiffres est: %d %d %d\n", nbreAleatoire1, nbreAleatoire2, nbreAleatoire3);

    return 0;
}

