#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(){
	
	int i =0, c;
	char *s;
	s = (char *)calloc (25, sizeof(char));
	while((c = getchar()) != EOF ){
			s[i] = c;
			i++;		
		}
	free(s);
	return s;
	
}

int main(void){

	int i =0, numberToCompare;
	int j =0;	
	char *inputText;
	char S0[MAXLIMIT][50];

	inputText = getInput();
	for(i =0; i < strlen(inputText); i++){
		S0[j][i] = inputText[i];
			if(inputText[i] == '\n'){
				j++;
				i = 0;				
			}
		}
	printf("\n");
	for(j =0; j < strlen(inputText) ; j++){
		printf("|%d value = %c| sizeof= %lu\n",j,S0[1][j], sizeof(S0[1][j]));
	}

return 0;
	

}
