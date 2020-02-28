void upper(char * message){

	int i = 0;
	int ascii_code;
	int convert;
	char result;

	while (message[i]!='\0'){
		if (message[i]!=' '){
			ascii_code=(int)message[i];
			if (ascii_code>=65 && ascii_code<=90){
				convert=ascii_code + 32;
				result=(char)convert;
				message[i]=result;
			}
			else if (ascii_code>=97 && ascii_code<=122){
				convert=ascii_code - 32;
				result=(char)convert;
				message[i]=result;
			}
		}
		i++;
	}
}