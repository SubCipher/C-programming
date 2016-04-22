#include <stdio.h>
#define MAXLINE 1000

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);
void blankSpaces(char);


int main(){

	int max;
	int len;
	int j;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = myGetline(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest,line);
		}
	
	if(max > 0)
	
		printf("this is the longest val: %s\n", blankSpaces(longest));
	return 0;

	}

//function called by main()

int myGetline(char s[], int lim){

	int c, i;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)
		s[i] = c;
		if(c == '\n'){
			s[i] = c;
			++i;
		}
	s[i] = '\0';
	return i;
	}

	void copy(char to[], char from[])
		{
			int i;
			i = 0;

			while(( to[i] = from[i]) != '\0')
				++i;
	
	}


void blankSpaces(char c){

	
	int inspace;
	inspace = 0;
	
	if(c ==' '){
		if(inspace == 0){
			inspace =1;
			putchar(c);
		}
		if (c != ' '){
			inspace = 0;
			putchar(c);
		}
	}
}





