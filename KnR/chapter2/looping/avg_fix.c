#include <stdio.h>



int main(void){
	
	

	int i,total =0, values = 0, numberOfValues;
	float answer;

	printf("how many values to read:");
	scanf("%d",&numberOfValues);

	for(i =0; i < numberOfValues; i++){	
		scanf("%d",&values);
		total += values;
		}
	
	answer = (float)total / (float) numberOfValues;	

	printf("the average from the %d values given is: %f", numberOfValues, answer);

}
