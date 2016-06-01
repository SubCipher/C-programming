#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(n){
	
	int i, c;
	char* s;
	s = (char*)calloc(n,sizeof(char));
	while((c = getchar()) != EOF){
		s[i] = c;
		printf("function index: %d | value = %c | sizeof = %lu | memory address %p",i,s[i],sizeof(s[i]),&s[i]);
		printf("\n");
		i++;
		}

	free(s);
	return s;
}

int main(void){

	int i=0,count,numArraysToCompare; 
	int j =0;	
	char* inputText;
	char s[10][count];
	printf("how much memory should we allocation for array elements?: \n");	
	scanf("%d",&count);
	
	printf("enter the amount of arrays to make for comparison: \n");
	scanf("%d",&numArraysToCompare);

	
	printf("enter %d elements to store in memory: \n",count);

	
	inputText = getInput(count);


	for(i =0; i < count; i++){
		printf("main index ID: %d | sizeof = %lu | main value %c | memory address: %p \n",i,sizeof(inputText),inputText[i],&inputText);
	}


	int i2 = 0;
	for(j =0; j < numArraysToCompare; j++){
		for(i = 0; i < count; i++){
			s[j][i2] = inputText[i];
			if(inputText[i] == '\n'){
			i2 =0;
			break;
			}
		}
	}

	for(j =0; j < numArraysToCompare; j++){
		for(i =0; i < count; i++){
			printf("2D array main index value: %d|%d | value = %c \n",j,i,s[j][i]);
			}
		}

return 0;

}
