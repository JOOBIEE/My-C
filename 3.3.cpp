#include<stdio.h>
#include <limits.h>
int main()
{
	long test = 0L;
	
	printf(" Enter an integer less than %ld:", LONG_MAX);
	scanf("%ld",&test);
	
	//TEst for even and odd.
	if (test %2L == 0L)
	
	{
		printf("The number %ld is even", test);
		
		//Now check whether half the number is also even
		if ((test/2L) %2L ==0L)
		
		{
			printf("\nHalf of %ld is also even", test);
			
		}
	}
	else 
	printf("The number %ld is odd\n", test);
	return 0;
}
