#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /*Creation des variables pour stocker les chiffres de la loterie*/
    int nbreAleatoire1; 
    int nbreAleatoire2;
    int nbreAleatoire3;

    /*Initialisation du generateur de nombres al�atoires*/
    srand(time(NULL)); 
    
    /*affectation d'un chiffre aleatoirement choisi � une variable donn�e*/
    nbreAleatoire1 = rand ()%10;
    nbreAleatoire2 = rand ()%10;
    nbreAleatoire3 = rand ()%10;

    /*Affichage du r�sultat*/
    printf("Le tirage de la quotidienne a 3 chiffres est: %d %d %d\n", nbreAleatoire1, nbreAleatoire2, nbreAleatoire3);

    return 0;
}

