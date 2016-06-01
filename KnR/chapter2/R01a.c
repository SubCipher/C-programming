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

<<<<<<< HEAD

	/*int i2 = 0;
	for(j =0; j < numArraysToCompare; j++){
		for(i = 0; i < count; i++){
			s[j][i2] = inputText[i];
=======
	printf("inputText position B value HERE is= %c\n\n",inputText[i]);

	for(j =0; j < numArraysToCompare; j++){
		for(i = 0; i < count; i++){
			s[j][i] = inputText;
			//inputText[i] = s[j][i];
>>>>>>> 87ee57584bf780d108e4e9efbe5ac23fd1a5e942*/

			if(inputText[i] == '\n'){
			i2 =0;
			break;
			}
		}
	}

	for(j =0; j < numArraysToCompare; j++){
		for(i =0; i < count; i++){
			printf("2D main index: %d|%d | sizeof = %lu | value = %s | memory address: %p \n",j,i,sizeof(s[j][i]),s[j][i],&s[j][i]);
			}

		}	
		return 0;

}
