#include <stdio.h>
#include <string.h>

int main(){

	char word1[7] = "krishna";
	char word2[10] = "homeTkex";
	char newWord[10];
	int i,j;
	int k =0;
	for(i =0; i<strlen(word1); i++){
		for(j =0; j <strlen(word2); j++){
			if(word1[i] == word2[j]){
				printf("match, %c\n",word1[i] );
				word1[k++] = word1[i];
		
			if(word1[i] != word2[j]){
				word1[k++] = ' ';
			
			}

			}	
		}			

	}	
//		printf("%s\n\n",newWord);
		printf("%s\n\n",word1);
}
