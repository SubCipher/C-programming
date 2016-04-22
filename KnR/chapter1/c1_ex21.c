#include <stdio.h>

#define MAXLIMIT 1024

int main(){

	int c, i;
	int blankCount = 0;
	int tabSpace = 4;
	int leftOverSpace = 0;
	int xo = 0;
	char s[MAXLIMIT];
	int offSet = 0;

	//get input until none is left
	while((c = getchar()) != EOF){
		
		//blank space check 
		if(c ==' '){
			++blankCount;

			//if blankCount is less than required tabSpace (4)
			if(blankCount < tabSpace){
				s[i] =' ';
				++i;
				++offSet;
				}
			//if tab space condition is met
			if(blankCount == tabSpace){
				s[i] = '\t';
				++i;
				//formula for getting spacing 
				// work in progress
				
				if(((blankCount - offSet) % tabSpace) > 0)
					leftOverSpace = tabSpace % blankCount;
					printf("%d",leftOverSpace);
					for(xo = 0; xo < leftOverSpace; ++xo) 
						s[i] = ' ';
						++i;
				blankCount = 0;
				leftOverSpace = 0;
				}
			}
			//get single space and reg char input into array 
			else{ 
				s[i] = c;
				blankCount = 0;
				++i;
			}

			}
		//print it all out
		int j =0;
		for(j = 0; j < i; ++j)
			printf("%c",s[j]);
return 0;

}

		

