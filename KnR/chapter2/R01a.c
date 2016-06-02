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

	printf("position A for inputText value HERE is= %s\n\n",inputText);
	for(i =0; i < count; i++){
		printf("main index ID: %d | sizeof = %lu | main value %c | memory address: %p \n",i,sizeof(inputText),inputText[i],&inputText);
	}


	printf("inputText position B value: %s | address in memory: %p\n",inputText,&inputText);



	char* compare[6][6];
	for(j =0; j <5; j++){
		for(i =0; i<5; i++){
		compare[j][i] = &inputText[i];
		}
	}
	for(j =0; j <5; j++){
		for(i =0; i < 5; i++){
			printf("value of compare[%d][%d] is %s",j,i,compare[j][i]);
			}
		}
	
		return 0;

}
