// Ecrire une fonction permettant de transformer toutes les minuscules
// en majuscules dans une chaîne de caractères

# include <stdio.h>
# include "upper.h"

int main() {

	char chaine[50]={'M','a','M','a','N',' ','d','I','t',' ','Q','u','E',' ','j','E',' ','s','U','i','S',' ','n','O','r','M','a','L','\0'};

	printf("Message : %s\n",chaine);
	upper(chaine);
	printf("Nouveau message : %s\n",chaine);

	return 0;
	
}