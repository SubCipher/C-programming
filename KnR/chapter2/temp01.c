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
		printf("s array index ID: %d | sizeof = %lu | memory address %p | contents %c",i,sizeof(s[i]),&s[i],s[i]);
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

	
	int s1[numArraysToCompare][elementCount];
/*
	for(j =i =0; i < elementCount; i++){
		s1[j][i] = '\0';
		}
*/
	printf("enter %d elements to store in memory: \n",elementCount);
	  
	inputText = getInput(numArraysToCompare);
/*
	for(i = 0; i < 100; i++){
		s[numArraysToCompare][elementCount] = 0;
		}
*/
	printf("\n\n");
	
	printf("[sample A] pointer address %p | contents of address %p \n",&inputText,inputText);
	printf("[sample AA] pointer address %p | contents of address %p ",&inputText+12,&inputText[12]);

	printf("\n\n");
	printf("index[%d][sample B] pointee address: %p |contents of address: %s",i,*(&inputText),&(*inputText));	

	printf("\n\n");
	
	for(i =0; i<strlen(inputText); i++){
		printf("index[%i][sample e] pointer address %p | contents of address %p \n",i,&inputText + i, inputText +i);
		}
	printf("\n\n");
	
	printf("%lu = strlen(inputText)",strlen(inputText));

	printf("\n\n");

		while( i < 10 ) {

			s1[j][i] = j,i;
			i++;
}


	printf("s1 = %s",s1);
		//for(i =0; i < strlen(inputText); i++){
		for(i =0; i < 10; i++){
			printf("main index ID:sx[%d] | ",i);

			printf("address %p | ",&s1[j][i]);
			printf("(c) %c | (d) %d | (s) %s | (p) %p \n",s1[j][i],s1[j][i],s1[j][i],s1[j][i]);

	
	} 

	return 0;
}
