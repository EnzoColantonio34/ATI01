// Ecrire une fonction permettant de remplacer les espaces d'une chaine de
// caractère par des '_' (ainsi que le main permettant de la tester)

#include <stdio.h>
#include "replace.h"

int main() {

	int i=0;
	char x;
	
	char chaine[10];
	chaine[0] = 'H';
	chaine[1] = 'A';
	chaine[2] = ' ';
	chaine[3] = 'H';
	chaine[4] = 'A';
	chaine[5] = ' ';
	chaine[6] = '!';
	chaine[7] = '\0';

	printf("chaine : %s\n",chaine);
	replace(chaine);
	printf("chaine sans espaces : %s\n",chaine);

	return 0;

}