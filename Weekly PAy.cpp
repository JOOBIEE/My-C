#include<stdio.h>
int main()
{
	float hours;
	float weekly_pay;
	float average_weekly_pay;
	
	// Emter weekly_pay
	
	printf("My weekly pay is :");
	scanf("%f",&weekly_pay);
	
	//Enter hours worked
	printf("\nI work for:");
	scanf("%f",&hours);
	
	//Calculate weekly pay
	average_weekly_pay = weekly_pay/hours;
	
	//Split into dollar and cents
	
	int dollars = (int)(average_weekly_pay);
	int cent = (int)((average_weekly_pay - dollars) * 100 + 0.5f);
	
	//Show result
	printf("My pay is %d dollars and %d cents", dollars, cent);
	
	
	return 0;
	
	
}
