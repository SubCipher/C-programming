t#include <stdio.h>

#define MAXLIM 1024

int main(){

	int i,c;
	int indexID;
	int letterCount;
	int otherCount;

	char s[MAXLIM];
	/*for(indexID = 0; indexID < MAXLIM -1  ; ++indexID){
		s[indexID] = ' ';

	} */

while(( c = getchar()) != EOF ){

	if( c != ' ' || c != '\t' || c != '\n'){
		
		s[indexID] = c;
		++indexID;
		++letterCount;		
		}


	else{
		s[indexID] = c;
		++indexID;
		++otherCount;

		}

	}
	printf("letter count is:	%d	sample letters: %d", letterCount, otherCount);

	for(i = 0; i < indexID +1; ++i){
		printf("%c", s[i]);

		}
	



}