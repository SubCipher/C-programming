#include <stdio.h>
#include <string.h>

int main(void){

	char *array1[] =
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
    "lexicographically",
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
    "xylophonically", /* if there is such a word :-) */
    "youthfulness",
    "zoologically"
  };
  char *array2[] =
  {
    "",
    "a",
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


	int i,k;
	int j =0;

	printf("\n\n");	
	for(j =0; array2[j] != '\0'; j++){
		for(i = 0; array2[j][i] != '\0'; i++){
			if(array2[j][i] != array1[j][i] && array2[j] != '\0'){
				array2[j][i] = array1[j][i];
				}

		//printf("%c\n",array2[j][i]);
	}
}
	
	printf("\n\n");	
}
