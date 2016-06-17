#include <stdio.h>
#include <string.h>


int main(void){

 char *leftstr[] =
  {
    "",
	"a",
	"antidisestablishmentarianism",
	"beautifications",
	"characteristically",
	"deterministically",
  };
  char *rightstr[] =
  { "", 
    "A",
    "the",
    "quick",
    "brown",
  };


	int i=0;
	int j=0; 
	int k=0;
	int l=0;
	int count;
	printf("\n\n");	

	int char_count =0;
	count =0;

	printf("\n\n");

		for(i =0; i < sizeof(leftstr) / sizeof(leftstr[0]);i++){
		
			for(j = 0; j < strlen(leftstr[i]); j++){
				for(k =0; k< sizeof(rightstr)/sizeof(rightstr[0]); k++){
					
					for(l=0; l< strlen(rightstr[k]); l++){
						if(rightstr[k][l] == leftstr[i][j]){
						printf("match");
						}	
					printf("rightstr: %c | %c \n",rightstr[k][l],leftstr[i][j]);

					}
				}


			}


		}
	
	
return 0;

}
