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
	char* s[numArraysToCompare][elementCount];

	printf("enter %d elements to store in memory: \n",elementCount);
	  
	inputText = getInput(numArraysToCompare);
	
		for(j =0; j < strlen(inputText); j++){
			s[i][j] = &inputText[j];
		} 

	printf("\n");
	printf("\n");
      	printf("%s is the value of s[0][0] at memory address space %p",s[0][0],&s[0][0]);
	printf("\n");
	printf("\n");
      	printf("%s is the value of s[0][1] at memory address space %p",s[0][1],&s[0][1]);
	printf("\n");
	printf("\n");
      	printf("%s is the value of s[0][2] at memory address space %p",s[0][2],&s[0][2]);
	printf("\n");
	printf("\n");
      	printf("%s is the value of s[0][3] at memory address space %p",s[0][3],&s[0][3]);
	printf("\n");
	printf("\n");
      	printf("%c is the value of s[0][0][0] at memory address space %p",s[0][0][0],&s[0][0][0]);
	printf("\n");
	printf("\n");

      	printf("%c is the value of s[0][0][1] at memory address space %p",s[0][0][1],&s[0][0][1]);
	printf("\n");
	printf("\n");
      	printf("%c is the value of s[0][0][2] at memory address space %p",s[0][0][2],&s[0][0][2]);
	printf("\n");
	printf("\n");
      	printf("%c is the value of s[0][0][3] at memory address space %p",s[0][0][3],&s[0][0][3]);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	for(j =0; x< strlen(inputText); x++){		
		printf("main index ID: s[%d][%d][%d] | value: %c | sizeof: %lu | address: %p \n",i,j,x,s[i][j][x],sizeof(s[i][j][x]),&s[i][j][x]);	
	}

return 0;

}
