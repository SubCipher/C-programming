#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024

/* get input */

char *getInput(){
	
	int i =0, c;
	char *s;
	s = (char *)calloc (25, sizeof(char));
	while((c = getchar()) != EOF ){
			s[i] = c;
			i++;		
		}
	//free(s);
	return s;
}

int main(void){

	int i =0,count; 
	int j =0;	
	char *inputText;
	char S0[MAXLIMIT][50];
	printf("enter run count\n");
	scanf("%d",&count);
	inputText = getInput();
	printf("%d",strlen(&inputText));
	for(i =0; i < strlen(inputText); i++){
		S0[j][i] = inputText[i];
			if(inputText[i]=='\n'){
				inputText[i] = '\0';	
				j++;
			}
		}

	//printf("%s",inputText);
	
	for(j= 0;j < count; j++){
		for(i = 0; i <10 ; i++){	
			printf("%d|%d value = %c| sizeof= %lu\n",j,i,S0[j][i], sizeof(S0[j][i]));
			}
	}

return 0;

}
