// TP4  ************ EXO 6 **************************


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

#define TAILLE 100


// Ecrire un programme qui recherche et affiche toutes les positions d’une valeur donnée dans un
// tableau de 100 entiers compris entre 0 et 20. Le tableau est initialisé avec des nombres aléatoires.Le
// programme indique s’il n’a pas trouvé la valeur.
// L’affichage se fait comme suit :
// Entrer la valeur recherchée : 12
// La valeur 12 a été trouvée en 0 puis en 5, puis en 37.
// Contrainte : La recherche se fait à l’aide d’une variable nommée Curseur de type pointeur d’entier et
// qui doit :
//  • être correctement déclarée
//  • être initialisée avec l’adresse du premier élément du tableau
//  • parcourir toutes les positions du tableau afin de comparer l’élément pointé avec la valeur
//    recherchée.


int rangedRand(int range_min, int range_max)
{
	// Generate random numbers in the half-closed interval
	// [range_min, range_max). In other words,
	// range_min <= random number < range_max

	int u = (int)((double)rand() / ((double)RAND_MAX + 1) * ((double)range_max - (double)range_min)) + range_min;
	return(u);
}


int main() {
	setlocale(LC_ALL, "fr-FR");
	// Seed the random-number generator with the current time so that
	// the numbers will be different every time we run.
	srand((unsigned)time(NULL));


	int tab[TAILLE];

	

	return(EXIT_SUCCESS);
}