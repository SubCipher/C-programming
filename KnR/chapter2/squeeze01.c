#include <stdio.h>
#include <string.h>
#define MAXLIMIT 1024

struct my_values {

	char v1[20];
	char v2[20];

};

struct get_values {

	char v1[20];
	char v2[20];

};



char *squeezing( char s0[], char s1[]){

	struct my_values value1;

	int i,j;
	for(i = j = 0; s0[i] == '\0'; i++){
		if(s0[i] != s1[j])
			s0[j++] = s0[i];
	s0[j] = '\0';
		}
	
	strcpy( value1.v1, s0);
	strcpy( value1.v2, s1);


	return 0;
	}

char * getText(){

	/*
	int i;
	int c;
	static char comparedText[MAXLIMIT];
	while((c = getchar()) != EOF){
		if(i < (MAXLIMIT -1)){	
		comparedText[i] = c;
		++i;
	}
	}
	*/
	static char comparedText[5] = {'a','c','g','n'};
	return comparedText;

}

int main(void){
	struct get_values value2;

	int c;
	int i;
	char s2[MAXLIMIT];

	char * getS0;
	char * getS1;

	while((c = getchar()) != EOF){
		
	if( i < (MAXLIMIT -1)){
			s2[i] = c; 
			++i;
		}
	}
	//getFromGetText = getText(s2);

 	getS0 = squeezing(s2, getText());
	
	printf("value2 = %s, %s", getS0.v1, value2.v2);

}
