#include<stdio.h>
int main()
{
	int total_pets;
	int cats;
	int dogs;
	int ponies;
	int others;
	//Set variable figure
	cats = 2;
	dogs = 3;
	ponies = 1;
	others = 46;
	//calculate
	total_pets= cats + dogs+ponies+others;
	printf("We have %d pets in total", total_pets);
	return 0;
}
