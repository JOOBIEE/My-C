#include <stdio.h>
int main ()
{
	const float Revenue_Per_150=4.5f;
	long Jansold = 23500;
	long Febsold = 19300;
	long Marsold = 21600;
	float RevQuarter = 0.0f;
	
	long Quartersold = Jansold + Febsold + Marsold;	//Calculate
	printf("stock sold in\n Jan: %d\n Mar: %d\n", Jansold, Febsold, Marsold);
	printf("Total Stock sold in first quarter: %d\n", Quartersold);
	
	//Calculate the total revenue for the quater and output it
	RevQuarter = Quartersold/150*Revenue_Per_150;
	printf("Sales revenue this quarter is $%.2f\n", RevQuarter);
	return 0;
}
