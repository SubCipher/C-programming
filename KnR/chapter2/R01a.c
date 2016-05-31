#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(n){
	
	int i, c;
	char* s;
	s = (char*)calloc(25, sizeof(char));
	while((c = getchar()) != EOF){
		s[i] = c;
		printf("function index: %d | value = %c | sizeof = %lu | memory address %p | \n",i,s[i],sizeof(s[i]),&s[i]);
		i++;
		}

	free(s);
	return s;
}

int main(void){

	int i=0,count; 
	int j =0;	
	char* inputText;
	char* S0[count];
	printf("enter memory allocation for array elements: \n");	
	scanf("%d",&count);
	
	printf("enter %d elements to store in memory: \n",count);
	for(i =0; i < count; i++){
		S0[i] = getInput(count);
	}
	for(i = 0; i < count; i++){	
	printf("\n%d|%d value = %s| sizeof= %lu | memory address: %p ",j,i,S0[i], sizeof(S0[i]), &S0[i]);
	}
return 0;

}
