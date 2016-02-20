#include <stdio.h>

#define MAXWORDLEN 10
#define IN 1
#define OUT 0

int main(){

	int c = EOF;
	int i = 0;
	int j = 0;
	int arrayOfLength[MAXWORDLEN + 1];
	int state = IN;
	int nc = 0;


	for(i = 0; i <= MAXWORDLENl ++i)
		arrayOfLength[i] = 0;
		
	while ((c = getchar()) != EOF){
		++nc;

		if(( c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
			--nc;
			}
		if(state == OUT){
			if(nc != 0 && nc <= MAXWORDLEN)
			++arrayOfLength[nc];

			state = IN;
			nc = 0;
		}
	}

	for(i = 1; i <= MAXWORDLEN; ++i)
		{
			printf("|%2d| ",i);
			
			for(j = 0; j < arrayOfLength[i]; ++j)
				putchar('*');
	
				putchar('\n');
				}
			return 0;

}







