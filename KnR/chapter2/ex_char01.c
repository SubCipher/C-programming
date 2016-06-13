#include <stdio.h>
#include <string.h>

int main(){

	char word1[7] = "krishna";
	char word2[10] = "homeTkex";
	char newWord[2];
	int i,j;
	int k =0;
	for(i =0; i<strlen(word1); i++){
		for(j =0; j <strlen(word2); j++){
			if(word1[i] == word2[j]){
				newWord[k] = word1[i];
				++k;
				printf("the match is:%c\n\n",word2[j]);
				
				}
		 }
	}printf("newWord= %s\n",newWord);

}	
