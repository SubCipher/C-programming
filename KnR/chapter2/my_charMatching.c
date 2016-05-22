#include <stdio.h>
#include <stdlib.h>
#define MAXLIMIT 1024


/* get input */

char *getInput(int n2c){
	
	int i ,c;
	char *s = malloc (sizeof(char) * n2c);

	//s = (int*) calloc (sizeof(int));
	while(( c = getchar()) != '\n'){
			s[i++] = c;
		}
	return s;	
}



int main(void){

	
	int i,j, numberToCompare;
	char *inputText;
	char *S0[MAXLIMIT];

	printf("how many comparisions to make? ");
	scanf("%d",&numberToCompare);
	printf("\nrun these many times: %d\n",numberToCompare);
	printf("enter some text\n");	
	
	for(i =0; i <= numberToCompare;i++){
		S0[j++]= getInput(numberToCompare);
		}
	for(j =0; j < numberToCompare; j++){
		printf("value %d is equal to = %s\n",j,S0[j]);
		}

	
	
return 0;
	

}
