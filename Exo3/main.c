// TP4  ************ EXO 3 **************************


#include <stdlib.h>
#include <stdio.h>

/********************** EXO 3 *****************************/

#define MAXNOM 20
#define MAXPRENOM 20



int main() {

	char nom[MAXNOM];
	char prenom[MAXPRENOM];
	char sexe;





	printf("\nEntrer le sexe : ");
	do {
		sexe = (char)_getch();
	} while ((sexe != 'F') && (sexe!='H'));

	





	return(EXIT_SUCCESS);
}