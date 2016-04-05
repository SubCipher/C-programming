#include <stdio.h>

//program for using a condition to trip a trigger

int main(){

	int loopTrigger;
	int triggerPoint;

	triggerPoint = 10;
	loopTrigger = 25;

	while( loopTrigger > 0){
		printf("loopTrigger: %d    /", loopTrigger);
		
		loopTrigger --;
		if(loopTrigger < triggerPoint && triggerPoint  > 0)
			{
				printf("triggerPoint: %d\n", triggerPoint);	
				triggerPoint--;
			}
		else{
			printf("\n");
			}
		}
		
return 0;
}