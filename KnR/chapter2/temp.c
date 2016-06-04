#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024
char *getInput(n){
	
	int i=0;
	int c;
	char* s;
	s = (char*)calloc(n,sizeof(char));
	while((c = getchar()) != EOF){
		s[i] = c;
		printf("function index: %d | value = %c | sizeof = %lu | memory address %p",i,s[i],sizeof(s[i]),&s[i]);
		printf("\n");
		i++;
		}

//	free(s);
	return s;
}

int main(void){

	int i=0;
	int elementCount =0;
	int numArraysToCompare =0; 
	int j,x =0;	
	int breakCount=0;	
	char* inputText;
	printf("how much memory should we allocate for array elements?: \n");	
	scanf("%d",&elementCount);
	
	printf("enter the amount of arrays to make for comparison: \n");
	scanf("%d",&numArraysToCompare);
	char* s[100][100];

	printf("enter %d elements to store in memory: \n",elementCount);
	  
	inputText = getInput(numArraysToCompare);
	
		for(j =0; j < strlen(inputText); j++){
			s[i][j] = &inputText[j];
			if(inputText[j] == '\n'){
				++i;
		}
	}

/*	 for(i =0; i<(numArraysToCompare); i++){
		for(j= 0; j <strlen(inputText); j++){
			for(x =0; x < strlen(inputText) ;++x){
				printf("this is it:index[%d][%d][%d] | value: %c(%d)| memory location: %p\n",i,j,x,s[i][j][x],x,&inputText[x]);
			}
		}	
	}
A
A
*/	
	printf("\n\n");
return 0;

}
