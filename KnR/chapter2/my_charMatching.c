#include <stdio.h>
#include <string.h>
#define MAXLIMIT 1024

int main(){


	int i = 0;
	int c;
	int numToCompare =0;
	char inputText[25];
	char s0[MAXLIMIT][50];

	
	while(( c = getchar()) != '\n'){	
		inputText[i++] = c;
		
	}
	for(i=0; i < strlen(inputText); i++){
		s0[0][i] = inputText[i];
		}
	printf("result00: %s\n",inputText);

	for(i =0; i < 11; i++){
		printf("result01: %s\n",s0[i]);
		}
return 0;
}