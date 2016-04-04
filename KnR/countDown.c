#include <stdio.h>

//program for using a condition to trip a trigger

int main(){

	int loopCount;
	int loopTrigger;
	int triggerPoint;

	triggerPoint = 10;
	loopTrigger = 25;

	while( loopCount < triggerPoint){
		printf("loopTrigger: %d", loopTrigger);
		loopTrigger--;

		if(loopTrigger > triggerPoint && triggerPoint  > 0)
			{
				printf(" triggerPoint: %d", triggerPoint);	
				triggerPoint--;
			}

}