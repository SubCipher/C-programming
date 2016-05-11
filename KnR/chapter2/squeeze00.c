#include <stdio.h>
#define MAXLIMIT 1024

void squeeze(char s0[], char s1[]){
	int i,j;

	for(i = j = 0; s0[i] != '\0' ; i++)
		if( s0[i] == s1[i])	
			s0[j++] = s0[i];
		s0[j] = '\0';
}


char *getNewText(){

	return 0;	
	}



int main(void){

	int i, j;
	int c;
	char sourceText[MAXLIMIT];
	while(( c = getchar()) != EOF){

		if (i < (MAXLIMIT -1)){
			sourceText[i] = c;
			++i;
		}
	}
	/*for(j = 0; j < i; ++j){
		printf("%c",sourceText[j]);
	}*/


	squeeze(sourceText, getNewText());
	printf("%s\n",sourceText);

		

return 0;

}