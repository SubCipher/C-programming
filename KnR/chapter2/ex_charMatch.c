#include <stdio.h>
#include <string.h>

int main(){

	char word1[10] = "krishna";
	char word2[10] = "homeTkex";

	int i,j;
	for(i =0; i<strlen(word1); i++){
		for(j =0; j <10; j++){
			if(word1[i] == word2[j]){
				printf("the match is:%c\n\n",word2[j]);

				}
		 }
	}

}	
