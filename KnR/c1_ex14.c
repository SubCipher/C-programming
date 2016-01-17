#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */




int main(){

	int i, c, nw, nc, state, wlen;
	int numOfLetters[15];
	state = OUT;
	nw = nc = 0;

	for (i = 0; i < 15; ++i)
		numOfLetters[i] = 0;

	while ((c = getchar()) != EOF) {

	++nc;

	if (c == ' ' || c == '\n' || c == '\t')
		state = OUT;

	else if (state == OUT) {
		state = IN;
		++nw;
		nc = 0;
		
		}
		numOfLetters[nw-1] = nc;
	
		}
	printf("%d %d\n numOfLetters= %d\n", nw, nc,numOfLetters[nw]);
	for (i = 0;  i < 15; ++i)
	wlen = 0;


}


