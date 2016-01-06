#include <stdio.h>

int main(){

	int c, nword;
	nword = 0;
	while ((c = getchar()) != EOF){
		if (c != '\b' || c != '\t'){
		putchar(c);
		}
		if ( c == ' ' || c == '\t'){
			putchar('\n');
			++nword;
		}
	}	
	printf("word count = %d\n", nword);

return 0;


}
