#include <stdio.h>
#define MAXLIMIT 1024



char *squeeze(char s0[], char s1[]){

	int i, j;
	
	for(i = j = 0; s0[i] != '\0'; i++)
	
		if(s0[i] == s1[i])
			s0[j++] = s0[i];
		s0[j] = '\0';

	return 0;
}

int main(void){
	int i, j;
	int c;
	
	char *compareText;
	char sourceText[MAXLIMIT];

	while((c = getchar()) != EOF){
		
		if (i < (MAXLIMIT -1)){
			sourceText[i] = c;
			++i;
		}
	}

	compareText = squeeze(sourceText, sourceText);
	printf("%s\n",compareText);

	return 0;

}