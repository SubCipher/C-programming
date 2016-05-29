#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(){
	
	int i, c;
	char* s;
	s = (char*)calloc(25, sizeof(char));
	printf("s memory address of s =%p",&s);
	printf("enter text: ");
	while((c = getchar()) != EOF){
			s[i] = c;
			i++;
		}
	free(s);
	return s;
}

int main(void){

	int i=0,count; 
	int j =0;	
	char *inputText;
	char S0[MAXLIMIT][50];
	
	printf("enter run count\n");
	scanf("%d",&count);
	inputText = getInput();
	

	for(j =0; j < count; j++){
		inputText = getInput();
		for(i= 0; i < 21/*(20*(strlen(inputText)))*/; i++){
			S0[j][i] = inputText[i];
			}
		}
	for(j= 0;j < count; j++){
		for(i = 0; i <20; i++){	
			printf("\n%d|%d value = %c| sizeof= %lu",j,i,S0[0][i], sizeof(S0[j][i]));
			}
	}

return 0;

}
