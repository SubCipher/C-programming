#include <stdio.h>

int main(){

	int c, blanks, tab, newline;
	blanks = 0;
	tab = 0;
	newline = 0;

	
	while ((c = getchar()) != EOF) {
		
		if ( c == ' ')	{
			++blanks;
		}

		if ( c == '\t') {
			++tab;
		}

		if ( c == '\n') {
			++newline;
		}

		}
		printf("\n blanks = %d \n tab = %d \n newline = %d \n", blanks, tab, newline);
	
	return 0;

}
