#include <stdio.h>

#define SETMAX 100


int main(){

	int c = 0;
	int i = 0;
	int wordCount = 1;

	char s[SETMAX];

	while ((c = getchar()) != EOF){

		if( c !=' '){
			s[i] = c;
			++i;
			//wordCount = 0;
		}
		else if(c ==' '){
			s[i] = c;
			++i;
			++wordCount; 
			}
		if(wordCount == 5) {
			//s[i] = putchar('\n');
			wordCount = 0;
			s[i] ="***";
			}
		}
	


		printf("%s",s);


	printf("wordCount is %d\n",wordCount);
	
return 0;

}
