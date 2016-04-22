#include <stdio.h>
#define MAXLINE 1000

char line[MAXLINE];

int myGetline(void);

int main(){

int t, len;
int location, spaceHolder;
const int FOLDLENGTH =70;

while((len = myGetline()) > 0){

	if(len < FOLDLENGTH){

	}
	else{
		t = 0;
		location = 0;

		while (t < len)
		{
			if(line[t] ==' ')
			spaceHolder = t;

			if(location == FOLDLENGTH){
				line[spaceHolder] = '\n';
				location = 0;
				}
				location++;
				t++;
				}
			}	
		printf ( "%s",line);
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











