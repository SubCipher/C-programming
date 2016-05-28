#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(){
	
	int i, c;
	char *s;
	s = (char *)calloc (25, sizeof(char));
	while((c = getchar()) != EOF ){
			s[i] = c;
			i++;		
		}
	free(s);
	return s;
}

int main(void){

	int ii,i,count; 
	int j =0;	
	char *inputText;
	char S0[MAXLIMIT][50];
	
	printf("enter run count\n");
	scanf("%d",&count);
	//inputText = getInput();
	
	for(j =0; j < count; j++){
		
		inputText = getInput();
		for(i= 0; i < strlen(inputText); i++){
			S0[j][i] = inputText[i];
			}
		}
		

	printf("inputText =%s, %d",inputText,i);
	
	for(j= 0;j < count; j++){
		for(i = 0; i <10 ; i++){	
			printf("\n%d|%d value = %c| sizeof= %lu",j,i,S0[j][i], sizeof(S0[j][i]));
			}
	}

return 0;

}
