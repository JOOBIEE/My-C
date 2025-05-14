#include<stdio.h>

int main()
{
	const double unit_price = 4.50;
	int quantity;
	printf("Enter the number that you want to buy:");
	scanf("%d", &quantity);
	
	
	//To test for discount condition
	double total = 0.0;
	if (quantity> 20)
	total = quantity*unit_price*0.5;
	
	else 
	total = quantity*unit_price;
	
	
	printf("The price for %d is $%.2f\n", quantity, total);
	return 0;
}
