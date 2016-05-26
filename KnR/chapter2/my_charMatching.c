#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLIMIT 1024

char *function00(){

	int i = 0;
	int c;
	char *outToMain;
	outToMain =(char* )calloc(25,sizeof(char));
	while((c =getchar()) != EOF){
		outToMain[i] = c;
		++i;
	}
	return outToMain;
	}
 
int main(void){

	int i;
	char s0[MAXLIMIT][50];	
	int j,numToCompare;
	char *inFromFunction;
	
	printf("how many arrays are to be read?");
	scanf("%d",&numToCompare);

	inFromFunction = function00();
	for(i =0; i < 5; i++){
		printf("returned value %c\n",inFromFunction[i]);
	} 

	while(j < numToCompare-1){
		for(i=0; i < (strlen(inFromFunction)-1); i++){
			s0[0][i] = inFromFunction[i];
			}
		j++;
	}

	printf("results: %s\n",s0[0]);

return 0;
}
