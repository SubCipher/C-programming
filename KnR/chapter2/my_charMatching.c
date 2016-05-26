#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLIMIT 1024


/*define function*/ 
char *function00(){

	int i = 0;
	int c;
	/*declare pointer outToMain*/ 
	char *outToMain;

	/*allocate memory for pointer and return a pointer to it*/ 
	outToMain =(char* )calloc(25,sizeof(char));
	
	while((c =getchar()) != EOF){
		outToMain[i] = c;
		++i;
	}
	return outToMain;
	}
 
int main(void){

	int i;
	/*declare 2D array*/
	char s0[MAXLIMIT][50];	
	
	int j,numToCompare;
	char *inFromFunction;
	
	printf("how many arrays are to be read?");
	scanf("%d",&numToCompare);
	
	//inFromFunction = function00();
	
		while(j < (numToCompare-1)){
			inFromFunction = function00();
			for(i=0; i < (strlen(inFromFunction)); i++){
				s0[j][i] = inFromFunction[i];
			}
		j++;
		}

		printf("results: %s\n",s0[0]);
	
	return 0;
	}
