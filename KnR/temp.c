#include <stdio.h>

int main(){


	int c, inspace;
	inspace = 0;

	while ((c = getchar()) != EOF){

		if (c == ' ') {
			if (inspace = 1){
				putchar('\\');
				putchar('\b');
				inpace = 0;
				}
			}

		if (c != ' '){
			
			
