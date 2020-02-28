// Écrire une fonction permettant de calculer la longueur
// d'une chaîne de caractère (ainsi que le main permettant de la tester)

#include <stdio.h>
#include "nb_char.h"

int main() {

	unsigned char str[100];
	int result;
	int compter=0;
	int i=0;
	char x;

	printf("Entrez votre chaîne de caractère (100 max, et sans espace) :\n");
	scanf("%s",str);

	result=nb_char(str);

	printf("Votre chaine : %s \n",str);
	printf("Nombre de caractere(s) : %d\n",result);

	return 0;

}