void replace_letter(char old, char new, char * message){

	int i=0;

	while (message[i]!='\0'){
		if (message[i]==old){
			message[i]=new;
		}
		i+=1;
	}
}