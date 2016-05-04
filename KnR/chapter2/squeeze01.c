#include <stdio.h>
#define MAXLIMIT 1024

char *squeezing( char s0[], char s1[]){

	int i,j;
	for(i = j = 0; s0[i] == '\0'; i++){
		if(s0[i] != s1[j])
			s0[j++] = s0[i];
	s0[j] = '\0';
		}
	
	return s1,s0;
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

	getS0,getS1 = squeezing(s2, getText());
	
	printf("getS0 = %s, getS1 = %s \n",getS0,getS1);

}
