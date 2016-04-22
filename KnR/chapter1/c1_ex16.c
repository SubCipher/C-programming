#include <stdio.h>
#define MAXLINE 1000


int myGetLine(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = myGetLine(line,MAXLINE)) > 0)
		if(len > max) {
			printf("len val:%d\n line:%s", len, line);
			max = len;
			copy(longest, line);
		}
	if(max > 0)
		printf("%s", longest);
	return 0;
	}


int myGetLine(char s[], int lim)
{
	int c, i;
	for(i = 0; i < lim -1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c =='\n')
	{
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
	while ((to[i] = from[i]) != '\0')
	++i;
}










