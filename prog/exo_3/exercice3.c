// Écrire une fonction permettant de remplacer toutes les occurrences d'un caractère
// (transmis en paramètre) par un autre caractère

#include <stdio.h>
#include "occurence.h"

int main(int argc, char * argv[]) {

	char old;
	char new;

	char chaine[10];
	chaine[0] = 'H';
	chaine[1] = 'A';
	chaine[2] = 'H';
	chaine[3] = 'A';
	chaine[4] = ' ';
	chaine[5] = '!';
	chaine[6] = '\0';

	if (argv[1]==0){
		printf("Echec : il faut deux arguments !\n");
	}
	else if (argv[2]==0){
		printf("Echec : il faut deux arguments !\n");
	}
	else {
		printf("Message : %s\n",chaine);
		printf("Caractère à remplacer : %s\n",argv[1]);
		printf("Nouveau caractère : %s\n",argv[2]);

		old=argv[1][0];
		new=argv[2][0];

		replace_letter(old, new, chaine);

		printf("===================================\n");
		printf("Nouveau message : %s\n",chaine);

	}

	return 0;

}