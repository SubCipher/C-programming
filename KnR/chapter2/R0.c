#include <stdio.h>
#include <stdlib.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(int n2c){
	
	 int i =0, c;
	//char *s = malloc (sizeof(char) * n2c);
	char *s;
	s = (char *)calloc (n2c, sizeof(char));
	printf("enter line text\n value of i = %d", i);
	while((c = getchar()) != EOF ){
			s[i] = c;
			i++;		
		}
	return s;
	//free(s);	
}

int main(void){

	int i =0, numberToCompare;
	int j =0;	
	char *inputText;
	char S0[MAXLIMIT][50];

	printf("how many comparisons to make?: ");
	scanf("%d",&numberToCompare);
	printf("run these many times: %d\n",numberToCompare);
	
	inputText = getInput(numberToCompare);
	for(i =0; i <= numberToCompare;++i){
		printf("enter some text\n");
			S0[0][i] = inputText[i];
		}

	for(j =0; j < numberToCompare; j++){
		printf("value %d is equal to = %s n",j,S0[0]);
	}
return 0;
	

}
