#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLIMIT 1024
char *getInput(n){
	
	int i=0;
	int c;
	char* s;
	s = (char*)calloc(n,sizeof(char));
	while((c = getchar()) != EOF){
		s[i] = c;
		printf("function index: %d | value = %c | sizeof = %lu | memory address %p",i,s[i],sizeof(s[i]),&s[i]);
		printf("\n");
		i++;
		}

//	free(s);
	return s;
}

int main(void){

	int i=0;
	int elementCount =0;
	int numArraysToCompare =0; 
	int j,x,k =0;	
	int breakCount=0;	
	char* inputText;
	printf("how much memory should we allocate for array elements?: \n");	
	scanf("%d",&elementCount);
	
	printf("enter the amount of arrays to make for comparison: \n");
	scanf("%d",&numArraysToCompare);
	char* s[numArraysToCompare][elementCount];

	printf("enter %d elements to store in memory: \n",elementCount);
	  
	inputText = getInput(numArraysToCompare);

	for(i = 0; i < 100; i++){
		s[numArraysToCompare][elementCount] = 0;
		}



	printf("%lu = strlen(inputText)",strlen(inputText));

		while( i < strlen(inputText) ) {
			if(inputText[i] != 'e'){
				s[i][j][x] = inputText[i];
				++x;
				}
			if(inputText[i] == 'e'){
				s[i][j][x] = '\0';
				++j;
				x =0;
				}
			++i;
		}




/*
		printf("\n\n inputText value: %s \n memory location: %p \n\n",inputText,&inputText);

		printf("\n inputText[0] value: %c \n memory location:%p \n\n",inputText[0],&inputText[0]);
		printf("\n inputText[1] value: %c \n memory location:%p \n\n",inputText[1],&inputText[1]);
		printf("\n inputText[2] value: %c \n memory location:%p \n\n",inputText[2],&inputText[2]);
		printf("\n\nprint contents of of inputText: %s\n",inputText);
		
		
		printf("\n\n");
		printf("\n\n");
     	printf("this >> %s<< (s[0][0]) is the value at memory address space %p\n\n",s[0][0],&s[0][0]);

     	printf("%s (s[1][0]) is the value at memory address space %p\n\n",s[1][0],&s[1][0]);
     	printf("%s (s[2][0]) is the value at memory address space %p\n\n",s[2][0],&s[2][0]);
     	printf("%s (s[3][0]) is the value at memory address space %p\n\n",s[3][0],&s[3][0]);
		printf("\n\n");
		printf("\n\n");
*/

/*     	printf("%s (s[0][2]) is the value at memory address space %p\n",s[0][2],&s[0][2]);

      	printf("%s is the value of s[1][1] at memory address space %p",s[1][1],&s[1][1]);
	printf("\n");
	printf("\n");
  	printf("%s is the value of s[2][0] at memory address space %p",s[2][0],&s[2][0]);
	printf("\n");
	printf("\n");
      	printf("%s is the value of s[3][0] at memory address space %p",s[3][0],&s[3][0]);
	printf("\n");
	printf("\n");
      	printf("%s is the value of s[4][0] at memory address space %p",s[4][0],&s[4][0]);
	printf("\n");
	printf("\n");

     printf("%s is the value of s[5][0] at memory address space %p",s[5][0],&s[5][0]);
	printf("\n");
	printf("\n");
      	printf("%c is the value of s[0][0][2] at memory address space %p",s[0][0][2],&s[0][0][2]);
	printf("\n");
	printf("\n");
      	printf("%c is the value of s[0][0][3] at memory address space %p",s[0][0][3],&s[0][0][3]);
	printf("\n");
	printf("\n");



    	printf("%s is the value of s[0][0] at memory address space %p\n",s[0][0],&s[0][0]);
    	printf("%s is the value of s[0][1] at memory address space %p\n",s[0][1],&s[0][1]);
    	printf("%s is the value of s[0][2] at memory address space %p\n",s[0][2],&s[0][2]);
    	printf("%s is the value of s[0][3] at memory address space %p\n",s[0][3],&s[0][3]);
    	printf("%s is the value of s[0][4] at memory address space %p\n",s[0][4],&s[0][4]);
    	printf("%s is the value of s[0][5] at memory address space %p\n",s[0][5],&s[0][5]);
    	printf("%s is the value of s[0][6] at memory address space %p\n",s[0][6],&s[0][6]);
    	printf("%s is the value of s[0][7] at memory address space %p\n",s[0][7],&s[0][7]);
    	printf("%s is the value of s[0][8] at memory address space %p\n",s[0][8],&s[0][8]);
    	printf("%s is the value of s[0][9] at memory address space %p\n",s[0][9],&s[0][9]);
	printf("\n");
	printf("\n");
    	printf("%c is the value of s[0][0][1] at memory address space %p\n",s[0][0][1],&s[0][0][1]);
    	printf("%c is the value of s[0][0][2] at memory address space %p\n",s[0][0][2],&s[0][0][2]);
    	printf("%c is the value of s[0][0][3] at memory address space %p\n",s[0][0][3],&s[0][0][3]);
    	printf("%c is the value of s[0][0][4] at memory address space %p\n",s[0][0][4],&s[0][0][4]);
    	printf("%c is the value of s[0][0][5] at memory address space %p\n",s[0][0][5],&s[0][0][5]);
    	printf("%c is the value of s[0][0][6] at memory address space %p\n",s[0][0][6],&s[0][0][6]);
    	printf("%c is the value of s[0][0][7] at memory address space %p\n",s[0][0][7],&s[0][0][7]);
	printf("\n");
	printf("\n");



	for(j =0; x< strlen(inputText); x++){		
		printf("main index ID: s[%d][%d][%d] | value: %c | sizeof: %lu | address: %p \n",i,j,x,s[i][j][x],sizeof(s[i][j][x]),&s[i][j][x]);	
	}i
*/
return 0;

}
