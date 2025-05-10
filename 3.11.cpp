#include<stdio.h>
int main()
{
	int number;
	printf("\nEnter an integer from 1 to 20: ");
	scanf("%d", &number);
	
	if(number > 10)
	printf("You entered %d which is greater than 10\n", number);
	
	if(number < 11)
	printf("You entered %d which is less than 11\n", number);
	return 0;
}
