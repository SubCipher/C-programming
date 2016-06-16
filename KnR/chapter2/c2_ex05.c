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


/*
	char *s1[] =
	{"the","rain","sunny","day","spring","time"};

	char *r1[] = 
	{"lost","space","over","agility","psycology"};

*/
	int i,j;
	int count;
	printf("\n\n");	

	for(i =0; i < sizeof(leftstr); ++i){

		printf("count: %d, sizeof leftstr[j][i]: %lu | sizeof leftstr[i]: %lu | char from s1: %p | %c \n",i,sizeof(leftstr[j][i]), sizeof(leftstr[i]), &leftstr[0][i],leftstr[0][i]);
		count++;
			
		}

	count =0;
	int c;
	printf("\n\n");
	for(i =0; i < sizeof(leftstr) / sizeof(leftstr[0]);i++){
		for(j = 0; j < strlen(leftstr[i]); j++){
			
			printf("assigned mem: %p | count: %d | word: %d | char (value of interest) %c\n",&leftstr[i][j],count,i,leftstr[i][j]);

		if( ((c = getchar()) == leftstr[i][j])){
			printf("found %c at count: %d | assigned mem: %p | in word: %d",c,count,&leftstr[i][j],i);
	}
			++count;

			}
		}	

	return 0;

}
