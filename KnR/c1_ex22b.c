#include <stdio.h>


#define SETMAX 100
#define MAXLINE 1000

char line[MAXLINE];
int myGetline(void);


int main(){
	
	int breakMarker, lenOfSentence;
	int indexID, spaceHolder;
	const int maxLength = 15;

	while((lenOfSentence = myGetline()) > 0){

		if(lenOfSentence < maxLength){
		}

		else{ breakMarker = 0;
		indexID = 0;

		while(breakMarker < lenOfSentence){
			if(line[breakMarker] ==' ')
			spaceHolder = breakMarker;

		if(indexID == maxLength){
			line[spaceHolder] = '\n';
			indexID = 0;
			}
			indexID++;
			breakMarker++;
			}
		}
	printf(" %s",line);
	}
return 0;

}


int myGetline(void){

	int c, i;
	extern char line[];

	for(i = 0; i <MAXLINE -1 && (c =getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;

	if(c =='\n'){
		line[i] =c;
		++i;
		}
	line[i] = '\0';
return i;

}



















