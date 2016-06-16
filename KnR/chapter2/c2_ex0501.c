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
	"electroencephalography",
    "familiarisation",
    "gastrointestinal",
    "heterogeneousness",
    "incomprehensibility",
    "justifications",
    "knowledgeable",
    "lexicographicallyi",
    "microarchitectures",
    "nondeterministically",
    "organizationally",
    "phenomenologically",
    "quantifications",
    "representationally",
    "straightforwardness",
    "telecommunications",
    "uncontrollability",
    "vulnerabilities",
    "wholeheartedly",
    "xylophonically",
    "youthfulness",
    "zoologically",
  };
  char *rightstr[] =
  { "", 
    "A",
    "the",
    "quick",
    "brown",
    "dog",
    "jumps",
    "over",
    "lazy",
    "fox",
    "get",
    "rid",
    "of",
    "windows",
    "and",
    "install",
    "linux"
  };


	int i,j,k;
	int count;
	printf("\n\n");	

	int char_count =0;
	count =0;
	char c;

	printf("\n\n");

	for(k =0; k < sizeof(rightstr)/ sizeof(rightstr[0]); k++){
		for(i =0; i < sizeof(leftstr) / sizeof(leftstr[0]);i++){
		
			for(j = 0; j < strlen(leftstr[i]); j++){

				if( rightstr[k][i] == leftstr[i][j]){
					++char_count;
					printf("found %c at count: %d | assigned mem: %p | in word: %d | number of occ's: %d\n",rightstr[k][i],count,&leftstr[i][j],i,char_count);
				}

				++count;

	 		}
		
		}	
	}
return 0;

}
