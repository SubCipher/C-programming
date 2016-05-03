#include <stdio.h>
#define MAXLIMIT 1024

char * squeeze(char s[], int c){
	int i,j;

	for(i = j = 0; s[i] != '\0' ; i++)
		if( s[i] != c)	
			s[j++] = s[i];
		s[j] = '\0';

return s;

}

int main(void){

	int i, j;
	int c;
	char *compareText;
	char sourceText[MAXLIMIT];
	while(( c = getchar()) != EOF){

		if (i < (MAXLIMIT -1)){
			sourceText[i] = c;
			++i;
		}
}
	for(j = 0; j < i; ++j){
		printf("%c",sourceText[j]);
		}

	compareText = squeeze(sourceText, 'a');
		for(j = 0; j < i; ++j);
	printf("%s\n",compareText);
		

return 0;

}