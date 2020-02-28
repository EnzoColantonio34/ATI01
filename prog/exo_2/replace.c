void replace(char * message){

	int i=0;

	while (message[i]!='\0'){
		if (message[i]==' '){
			message[i]='_';
		}
		i+=1;
	}
}