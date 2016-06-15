#include <stdio.h>
#include <stdlib.h>

int hexalpha_to_int(int c){
	char hexalpha[] = "aAbBcCdDeEfF";
	int i;
	int answer = 0;

	for(i =0; answer == 0 && hexalpha[i] != '\0'; i++){
		if(hexalpha[i] == c){
			answer = 10 + (i /2);
		}
	}
	return answer;
}

unsigned int htoi(const char s[]){

	unsigned int answer = 0;
	int i = 0;
	int valid =1;
	int hexit;
/* check incoming parameter (array[element] from main) */
	if(s[i] == '0'){
		++i;
		if(s[i] == 'x' || s[i] =='X'){
			++i;
		}
	}

while (valid && s[i] != '\0'){
	answer = answer * 16;
	if(s[i] >= '0' && s[i] <= '9'){
		answer = answer + (s[i] - '0');
		}
	else{
		hexit = hexalpha_to_int(s[i]);
		if(hexit == 0){
			valid = 0;
		}
		else{
			answer = answer + hexit;
			}
		}
		++i;
	}
	if(!valid){
		answer = 0;
		}
	return answer;
	}

int main(void){
	
	//create pointer to NULL
	char *endp = NULL;	
	char *test[] ={	
		"F00",
    		"bar",
    		"0100",
    		"0x1",
    		"0XA",
    		"0X0C0BE",
    		"abcdef",
    		"123456",
    		"0x123456",
    		"deadbeef",
    		"zog_c"		
		};

	unsigned int result;
	unsigned int check;
	/* use sizeof to calculate size of array (total amt of characters / 8bits *the number of bits allocated per character)  */ 
	size_t numtests = sizeof test / sizeof test[0];

	/* size_t data type used int for loop */
	size_t thistest;

	/* run loop until thistext value while thistest < numtests */
	for(thistest = 0; thistest < numtests; thistest++){
	
		/* send the array[item] to the htoi function and read output into results */
		result = htoi(test[thistest]);
		check = (unsigned int)strtoul(test[thistest],&endp,16);

		if((*endp != '\0' && result == 0) || result == check){
			printf("Testing %s. Correct. %u\n",test[thistest],result);
		}
		else{
			printf("Testing %s. Incorrct. %u\n",test[thistest],result);
			}
		}
		return 0;
	}


















