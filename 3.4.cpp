#include<stdio.h>
int main()
{
	char letter;
	
	printf("Enter an uppercase letter:");	//Input
	scanf("%c",&letter);
	
	//Check if input is uppercase
	if (letter >= 'A')
	if (letter <= 'Z')
	{
		letter = letter -'A' + 'a';		//Convert from upper to lowercase
		printf("You entered an uppercase %c\n", letter);
		
	}
	else 
	printf("Try using the shift key! I want a capital letter.\n");
	return 0;
}
