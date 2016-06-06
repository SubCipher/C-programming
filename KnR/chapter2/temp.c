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
	int j,x,k =0;	
	int breakCount=0;	
	char* inputText;
	printf("how much memory should we allocate for array elements?: \n");	
	scanf("%d",&elementCount);
	
	printf("enter the amount of arrays to make for comparison: \n");
	scanf("%d",&numArraysToCompare);
	char* s[numArraysToCompare][elementCount];

	printf("enter %d elements to store in memory: \n",elementCount);
	  
	inputText = getInput(numArraysToCompare);

	for(i = 0; i < 100; i++){
		s[numArraysToCompare][elementCount] = 0;
		}

	printf("\n\n");
	
	printf("inputText assigned memory address %p | contents of address %p ",&inputText,inputText);

	printf("\n\n");
	printf("de-referenced address: %p |contents of address: %s",*(&inputText),&(*inputText));	

	printf("\n\n");
	
	for(i =0; i<strlen(inputText); i++){
	
		printf("assigned memory: %p :inputText ascii ref: %d |de-referenced address: %p | contents of address: %c\n",&inputText[i],*(&inputText[i]),&inputText[i],inputText[i]);
		}
	printf("\n\n");
	printf("%lu = strlen(inputText)",strlen(inputText));

	printf("\n\n");

		while( i < strlen(inputText) ) {
			if(inputText[i] != 'e'){
				s[i][j][x] = inputText[i];
				++x;
				}
			if(inputText[i] == 'e'){
				s[i][j][x] = '\0';
				++j;
				x =0;
				}
			++i;
		}


	for(j =0; x< strlen(inputText); x++){		
		printf("main index ID: s[%d][%d][%d] | value: %c | sizeof: %lu | address: %p \n",i,j,x,s[i][j][x],sizeof(s[i][j][x]),&s[i][j][x]);	
	}

	return 0;
}
