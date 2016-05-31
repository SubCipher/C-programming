#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(int n){
	
	int i, c;
	char* s;
	s = (char*)calloc(n, sizeof(char));
	printf("enter %d elements to store in memory ",n);
	while((c = getchar()) != EOF){
			s[i] = c;
			i++;
		}
	printf("function value");
	for(i =0; i < n; i++){
		printf("value = %c memory address %p \n",s[i],&s[i]);
	}

	
	free(s);
	return s;
}

int main(void){

	int i=0,count; 
	int j =0;	
	char* inputText;
	char* S0[count];
	
	printf("enter run count\n");
	scanf("%d",&count);
	
		inputText = getInput(count);
		printf("inputText value from function = %s",inputText);

		S0[i] = inputText;
		
		for(i = 0; i <count; i++){	
			printf("\n%d|%d value = %s| sizeof= %lu | memory address: %p ",j,i,S0[i], sizeof(S0[i]), &S0[i]);
			}

return 0;

}
