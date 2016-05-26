#include <stdio.h>
#include <string.h>
#define MAXLIMIT 1024

char* function00(){

	int i = 0;
	int c;
	char outToMain[MAXLIMIT];
	outToMain =(char* )calloc(25,sizeof(char));
	while((c =getchar()) !='\n'){
		outToMain[i++] = c;

	}
return outToMain;
}
 
int main(){

	int i;
	char s0[MAXLIMIT][50];	
	int j,numToCompare;
	char *inFromFunction;
	
	printf("how many arrays are to be read?");
	scanf("%d",&numToCompare);

	inFromFunction = function00();
	
	while(j < numToCompare-1){
		for(i=0; i < numToCompare-1; i++){
			s0[0][j] = inFromFunction[i];
			}
		j++;
	}
return 0;
}
