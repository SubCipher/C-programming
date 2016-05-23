#include <stdio.h>



int main(void){
	
	

	int i =0,total =0, values = 0, numberOfValues;
	float answer;

	printf("how many values to read:");
	scanf("%d",&numberOfValues);

	while(i < numberOfValues){	
		scanf("%d",&values);
		total += values;
		++i;
		}
	
	answer = (float)total / (float) numberOfValues;	

	printf("the average from the %d values given is: %f", numberOfValues, answer);

}
