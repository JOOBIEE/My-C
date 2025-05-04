#include<stdio.h>
int main()
{
	long shorty = 0L;
	long lofty = 0L;
	long foot = 0L;
	long inches = 0L;
	long shorty_to_lofty = 0L;
	long lofty_to_tree = 0L;
	const long inches_per_foot = 12L;
	
	//Get Lofty height
	printf("Enter lofty's height to the top of his/her head, in whole feet:'");
	scanf("%ld", &feet);
	printf("			...and then inches:		");
	scanf("%ld", &inches);
	lofty = feet*inches_per_foot + inches;
	
	//Get Shorty;s height
	printf("Enter Shorty's heght up to her eyes, in whole feet: ");
	scanf("ld", &feet);
	printf("			...... and then inches: ");
	scanf("%ld", &inches);
	shorty = feet*inches_per_foot + inches;
	
	//Get the distance from shorty to lofty
	printf("Enter the distance from lofty to the tree to the nearest foot: ");
	scanf("%ld", &feet);
	printf("     		and then inches: ");
	scanf("%ld", &inches);
	shorty_to_lofty = feet*inches_per_foot + inches;
	
		
}
