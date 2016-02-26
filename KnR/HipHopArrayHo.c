#include <stdio.h>

#define MAXWORDLEN 10

int main(){

	int c;
	int l1 = 0;
	int l2 = 0;
	int wordCount = 0;
	int whiteSpace = 0;

	int long wordLenArray[10];
	int i = 0;
	for(i = 0; i < MAXWORDLEN ; ++i){
		wordLenArray[i] = 0;
		}
/*		putchar('\n');
		printf("%2d | ", i);
		printf("%d", wordLenArray[i]);
		}
*/	

	while((c = getchar()) != EOF){

		if( c ==' ' || c == '\t' || c == '\n'){
			++whiteSpace;		
			wordLenArray[l1] = wordCount;
			wordCount = 0;
			++l1;

		}
		else {
			++wordCount;
			
			}
		}

		int ol = 0 ;
		int il = 0 ;

		//for( i = 0; i < MAXWORDLEN; ++i){
		while (ol < MAXWORDLEN){
			for (i = 0; i < MAXWORDLEN ; ++i){
				if(ol != wordLenArray[i]){
					printf("%2d | ",i);
					putchar('-');
					printf("\n");
					}
				else if(ol == wordLenArray[i])
					{
					printf("%2d | ", i);
						putchar('*');
						putchar('\n');
					}
			++ol;
			
			}					

			}
return 0;

}