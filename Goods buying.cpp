#include<stdio.h>
int main()
{
	int choice;
	int quantity;
	double A = 3.50;
	double B = 5.50;
	
	//Take Customer Choice
	printf("Customers choice Enter 1 for A and 2 for B:");
	scanf("%d",&choice );
	
	//Take quantity
	printf("Quantity needed:");
	scanf("%d", &quantity);
	
	//Calculate it
	double total = quantity*(A*(2-choice) + B*(choice-1));
	
	printf("THe total is $%.2lf ", total);
	
	return 0;
}

