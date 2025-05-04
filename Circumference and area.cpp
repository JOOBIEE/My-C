#include<stdio.h>
#define Pi 3.14159
int main()
{
	float radius = 0.0f;
	float diameter = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;

	printf("input the diameter of the table:");
	scanf("%f", &diameter);
	
	radius = diameter/2.0f;
	circumference = 2.0f*Pi*radius;
	area = Pi*radius*radius;
	printf("\nThe Circumference is %.2f", circumference);
	printf("\nThe area is %.2f\n", area);
	return 0;
}
