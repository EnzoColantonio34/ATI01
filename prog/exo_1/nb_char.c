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