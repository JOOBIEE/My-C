#include<stdio.h>
int main()
{
	long inches_value;
	double foot;
	double yards;
	
	
	printf("The size of my foot in inches is ......");
	scanf("%ld", &inches_value);
	
	 foot= (double)inches_value/12.0;
	yards = (double)inches_value/36.0; 
	printf("The %ld in foot is %.2f and %.2f in yards ", inches_value , foot, yards);
	


	
	return 0;
	 
}
