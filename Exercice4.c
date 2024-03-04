#include <stdio.h>
#include <math.h>

int main() {
	
  	printf("La liste des nombres d'Amstrong entre 100 et 999 est: \n");
  	
    int nombre;/* Déclaration de la variable pour stocker le nombre en cours
	 d'évaluation*/

	// Boucle pour examiner tous les nombres de 100 à 999
    for (nombre = 100; nombre <= 999; nombre++) {
        int somme = 0; /* Declaration de la variable pour stocker 
		la somme des cubes des chiffres composants le nombre*/
        int nombreEvalue = nombre; /* Déclaration de la variale
		temporaire pour évaluer les chiffres indiciduels*/
		int unite; /*Déclaration de la variable pour stocker le chiffre des unités*/
		int dizaine; /*Déclaration de la variable pour stocker le chiffre des dizaines*/
		int centaine; /*Déclaration de la variable pour stocker le chiffre des centaines*/
		int powerValue = 3; /*Déclaration de la puissance à laquelle chaque chiffre sera élevé*/
		
		
		unite = nombreEvalue % 10; /*Chiffre des unités*/
		dizaine = (nombreEvalue % 100 )/ 10; /*Chiffre des dizaines*/
		centaine = nombreEvalue / 100; /*Chiffre des centaines*/
		
		// Calcul de la somme des cubes des chiffres
        somme = pow(unite, powerValue) + pow(dizaine, powerValue) + pow(centaine, powerValue);
        
        //Verification si la somme des cubes est égale au nombre actuel
		if (somme == nombre ){
			printf("%d \n", nombre); /*Afficher la liste des nombres d'Armstrong entre 100 et 999*/
		}
    }
	
    return 0;
}
