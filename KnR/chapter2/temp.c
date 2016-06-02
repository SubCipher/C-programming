#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

//	free(s);
	return s;
}

int main(void){

	int i=0,count,numArraysToCompare; 
	int j =0;	
	char* inputText;
	//char s[10][count];
	printf("how much memory should we allocation for array elements?: \n");	
	scanf("%d",&count);
	
	char* s[10][count];
	
	printf("enter the amount of arrays to make for comparison: \n");
	scanf("%d",&numArraysToCompare);
	
	printf("enter %d elements to store in memory: \n",count);
	
	inputText = getInput(count);

	printf("position A for inputText value HERE is: %s\n\n",inputText);
	printf("position A for inputText[4] value HERE is: %s n\n",&inputText[4]);
	printf("index ID: 4 | value: %c | sizeof: %lu | memory location: %p",inputText[4],sizeof(inputText[4]),&inputText[4]);
	printf("\n\n");

	for(i =0; i < count; i++){
		printf("main index ID: %d | sizeof = %lu | main value %s | memory address: %p \n",i,sizeof(inputText[i]),inputText[i],&inputText[i]);
	}


	printf("inputText position B value: %s | address in memory: %p\n",inputText,&inputText);

	
	for(i =0; i < count; i++){
		s[j][i] = &inputText[i];
		}
	

	for(i =0; i < count; i++){
		printf("\n 2D output:: index ID: %d|%d | value: %s | sizeof: %lu | memory address: %p \n",j,i,&s[j][i],sizeof(s[j][i]),&s[j][i]);
		}


return 0;

}
