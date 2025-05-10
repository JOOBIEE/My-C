#include<stdio.h>
int main()
{
	char letter = 0;
	
	printf("Enter an upper case letter");
	scanf("%c", &letter);
	
	if((letter >='A')&& (letter<='Z'))	//Verify uppercase letter
	{
		letter >= 'a'-'A';
		printf("You entered an uppercase%.\n", letter);
	}
	else
	printf("You did not enter an uppercase letter.\n");
	return 0;
}
