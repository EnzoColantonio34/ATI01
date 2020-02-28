//////////////////////////////////////////////////////////////////////////
// EXERCICE 1
int nb_char(unsigned char str[100]){

	int compter=0;
	int i=0;
	char x;

	while (i<100){
		x=str[i];
		if (x=='\0'){
			break;
		}
		compter+=1;
		i+=1;
	}

	return compter;
	
}

//////////////////////////////////////////////////////////////////////////
// EXERCICE 2
void replace(char * message){

	int i=0;

	while (message[i]!='\0'){
		if (message[i]==' '){
			message[i]='_';
		}
		i+=1;
	}
}

//////////////////////////////////////////////////////////////////////////
// EXERCICE 3
void replace_letter(char old, char new, char * message){

	int i=0;

	while (message[i]!='\0'){
		if (message[i]==old){
			message[i]=new;
		}
		i+=1;
	}
}

//////////////////////////////////////////////////////////////////////////