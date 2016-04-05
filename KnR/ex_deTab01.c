#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_BUFFER 1024
#define SPACE ' '
#define TAB '\t'

int calculateNumberOfSpaces(int offset, int tabSize){
	return tabSize - (offset % tabSize);
	}

int getline(char s[],int lim){
	int c,i;
	
	for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if( c =='\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int main(void){
	char Buffer[MAX_BUFFER];
	int tabSize = 5;
	int i, j, k, l;

	while(getline(Buffer, MAX_BUFFER) > 0){
		for(i = 0, 1 = 0; Buffer[i] != '\0'; i++){
			if(Buffer[i] == TAB){
			j = calculateNumberOfSpaces(1,tabSize);
			for(k=0; k < j; k++){
			putchar(SPACE);
			l++;
			}
		}
		else{
			putchar(Buffer[i]);
			}
		}
	}
	return 0;
}
			