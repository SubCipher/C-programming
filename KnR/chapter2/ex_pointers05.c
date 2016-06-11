#include <stdio.h>
//passing value
void B(int worth){
	worth = worth + 1;

}


void A(int* worth){
	*worth = *worth +1;
}


int main(){

	int netWorthB;
	netWorthB =55;
	
	B(netWorthB);

	int netWorthA;
	netWorthA =66;

	A(&netWorthA);
	


	printf("function B: %d\nfunction A:%d",netWorthB,netWorthA);


}