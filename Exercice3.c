#include <stdio.h>
#include <math.h> // Pour utiliser la fonction floor()

int main() {
    int A, O, S, B, C, D, P, J; // Déclaration de variables (type entier)

    for (A = 2024; A <= 2033; A++) {
    	
        // Calculs basés sur l'algorithme donné
        O = (A % 19) + 1; 
        S = floor(A / 100) + 1;
        B = floor((3 * S) / 4) - 12;
        C = floor((8 * S + 5) / 25) - 5;
        D = floor((5 * A / 4)) - B - 10;
        P = (11 * O + 20 + C - B) % 30;

        if (P < 0) {
            P += 30; 
        }

        if ((P == 25 && O > 11) || P == 24) { //début de boucle if avec condition que P=25 et 0 > 11
            P++; // incrémentation de P si les conditions sont vériée
        }

        J = 44 - P;

        if (J < 21) {
            J += 30;
        }

        J = J + 7 - ((D + J) % 7);

        // Trouver le mois et le jour de Pâques
        if (J > 31) {
            printf("Le jour de Paques est le %d avril %d \n" , J - 31, A);
        } else {
            printf("Le jour de Paques est le %d mars %d \n" , J, A);
        }
    }

    return 0;
}

