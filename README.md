# Tp1_ift1169
	Critères de correction : 
	Voici les points qui seront évalués pour la qualité de la présentation pour les programmes et les résultats : 
o	indentation
o	identificateurs significatifs
o	commentaires
o	lisibilité du programme et des résultats
o	aération du code et des résultats (utilisation de ligne blanche)
 
Numéro1 (5 points)

La séquence d’instructions suivante va affecter une valeur pseudo-aléatoire entière entre 0 et 99 à la variable nbreAleatoire.

#include <time.h>
#include <stdlib.h>

void main()
{
     int nbreAleatoire;

     srand(time(NULL));
     nbreAleatoire =  rand()%100;

     
}

Écrivez un programme en C qui va simuler un tirage d’une loterie de 3 chiffres entre 0 et 9 avec répétition permise et affichera le résultat à l’écran suivant le modèle suivant.

Tirage de la quotidienne à 3 chiffres : 3 4 3

Critères de correction pour le numéro 1

1.	Bon fonctionnement 	3 points
2.	Présentation du programme et du résultat	2 points




Numéro2 (if imbriqués, switch : 6 points)

Écrivez un programme en C qui va générer pseudo-aléatoirement le tirage d’une seule carte dans un jeu de cartes.

Remarques : il y a 4 suites dans un jeu (cœur, carreau, pique et trèfle) et treize valeurs possibles par suite (as, 2 à 10, valet, dame et roi).

Imprimez ensuite le résultat sous la forme :

La carte tirée est l’as de coeur
La carte tirée est le 10 de pique


Critères de correction pour le numéro 2

1.	Bon fonctionnement 	3 points
2.	Utilisation de if imbriqués pour l’affichage de la valeur de la carte	1 point
3.	Utilisation de switch pour l’affichage de la suite	1 point
4.	Présentation du programme et du résultat	1 point


 
 

Numéro 3  ( 8  points )

Écrire un programme en langage C qui calcule la date de Pâques à partir d'une année tapée au clavier.  Évidemment, pour réussir ce calcul, il faut un algorithme approprié.  En voici un, trouvé à la fin du 16ième siècle par l'astronome napolitain Aloysius Lilius et le mathématicien allemand Christopher Clavius.
Dans ce qui suit, appelons A l'année pour laquelle on désire connaître la date de Pâques (rappelons que Pâques est défini comme le premier dimanche qui suit la pleine lune arrivant après le 20 mars).  L'algorithme en pseudo-code (langage informel) est le suivant :

E0. Lire A

E1. O  A mod 19 + 1 {nombre d'or du cycle métonique (basée sur 19 ans)}

E2. S    A / 100  + 1     {calcul du siècle}

E3. B   3S / 4  - 12      {nombre d'années bissextiles perdues}
    C   (8S+5) / 25  - 5  {correction spéciale pour synchroniser Pâques
 	avec l'orbite de la lune}

E4. D     5A / 4  - B - 10   {pour trouver le dimanche approprié}

E5. P  (11O + 20 + C - B) mod 30  {calcul de la pleine lune}
    si P < 0 alors P  P + 30
    si (P = 25  O > 11)  P = 24 alors P  P + 1

E6. J  44 - P
    si J < 21 alors J  J + 30

E7. J  J + 7 - ((D+J) mod 7)    {trouver le dimanche}

E8. si J > 31 alors (J-31) avril est la date recherchée sinon J mars est la date recherchée {trouver le bon mois}

Remarque:	
Les symboles   indiquent le plancher (partie entière) d’une valeur réelle, donc  A / 100     est la division entière (sans reste) de A par 100, le symbole  représente le «ET » logique et le symbole  représente le «OU» logique. L’opération mod est le modulo. Le symbole  est l’affectation.

Données pour la remise: Les dix prochaines années, à partir de 2024.
(Au début, vous faites le programme qui fonctionne avec une année tapée au clavier.
Une fois que les boucles de répétition sont expliquées en classe, vous utiliserez une boucle appropriée pour déterminer les dates de Pâques des 10 années à partir de 2024).

Critères de corrections pour le numéro 3 :
1.	Présentation 	2 points
1.1.	Le programme doit être commenté de façon adéquate (identification des auteurs, description du codage, description des variables, etc).
1.2.	choix d’identificateurs plus significatifs que ceux utilisés dans le pseudo-code.
1.3.	Indentation et aération du code.
1.4.	Lisibilité des résultats.
2.	Traduction appropriée de l’algorithme en langage C	3 points
3.	Choix de boucle appropriée 	1 point         
4.	Bon fonctionnement	 2 points
Numéro 4 ( boucles, if, modulo et division entière: 6 points)

Nombre d'Armstrong : Les nombres d'Armstrong sont tels que la somme des cubes de chaque chiffre du nombre est égale à ce nombre. 
Écrivez un programme qui affiche ces nombres sachant qu'ils sont compris entre 100 et 999. 

Exemple: 153 = 13 + 53 + 33


Critères de correction du numéro 4 :

1.	utilisation de modulo et division pour extraire les chiffres des centaines, dizaines et unités	: 2 points
2.	utilisation de boucle(s) appropriée(s) 	: 1 point
3.	bon fonctionnement	: 2 points
4.	présentation	: 1 point 
