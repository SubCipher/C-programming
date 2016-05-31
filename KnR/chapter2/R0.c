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
	//free(s);
	return s;
}

int main(void){

	int i=0,count; 
	int j =0;	
	char* inputText;
	char S0[count][50];
	
	printf("enter run count\n");
	scanf("%d",&count);
	

		inputText = getInput(count);
		for(i= 0; i < count; i++){
			S0[j][i] = inputText[i];
			}

		for(i = 0; i <count; i++){	
			printf("\n%d|%d value = %c| sizeof= %lu",j,i,S0[j][i], sizeof(S0[j][i]));
			}

return 0;

}
