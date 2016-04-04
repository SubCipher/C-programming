#include <stdio.h>

//program for using a condition to trip a trigger

int main(){

	int loopTrigger;
	int triggerPoint;

	triggerPoint = 10;
	loopTrigger = 25;

	while( loopTrigger > 0){
		printf("loopTrigger: %d    /\n", loopTrigger);
		
		loopTrigger --;
		if(loopTrigger < triggerPoint && triggerPoint  > 0)
			{
				printf(" triggerPoint: %d\n", triggerPoint);	
				triggerPoint--;
			}
		}
		
return 0;
}