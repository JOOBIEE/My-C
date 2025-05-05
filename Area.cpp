#include<stdio.h>
int main()
{
	long area;
	long lenght;
	long width;
	
	//USer enters Lenght
	printf("The lenght of the rod is:");
	scanf("%ld", &lenght);
	
	//USer enters Width
	printf("The width of the rod is:");
	scanf("%ld",&width);
	
	//Calculate Area
	area = lenght*width;
	printf("The area is %ld square meters", area);
	
	return 0;
	
	
}
