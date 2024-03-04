#include <stdio.h>
#include <math.h>

int main() {
	
  	printf("La liste des nombres d'Amstrong entre 100 et 999 est: \n");
  	
    int nombre;/* D�claration de la variable pour stocker le nombre en cours
	 d'�valuation*/

	// Boucle pour examiner tous les nombres de 100 � 999
    for (nombre = 100; nombre <= 999; nombre++) {
        int somme = 0; /* Declaration de la variable pour stocker 
		la somme des cubes des chiffres composants le nombre*/
        int nombreEvalue = nombre; /* D�claration de la variale
		temporaire pour �valuer les chiffres indiciduels*/
		int unite; /*D�claration de la variable pour stocker le chiffre des unit�s*/
		int dizaine; /*D�claration de la variable pour stocker le chiffre des dizaines*/
		int centaine; /*D�claration de la variable pour stocker le chiffre des centaines*/
		int powerValue = 3; /*D�claration de la puissance � laquelle chaque chiffre sera �lev�*/
		
		
		unite = nombreEvalue % 10; /*Chiffre des unit�s*/
		dizaine = (nombreEvalue % 100 )/ 10; /*Chiffre des dizaines*/
		centaine = nombreEvalue / 100; /*Chiffre des centaines*/
		
		// Calcul de la somme des cubes des chiffres
        somme = pow(unite, powerValue) + pow(dizaine, powerValue) + pow(centaine, powerValue);
        
        //Verification si la somme des cubes est �gale au nombre actuel
		if (somme == nombre ){
			printf("%d \n", nombre); /*Afficher la liste des nombres d'Armstrong entre 100 et 999*/
		}
    }
	
    return 0;
}
