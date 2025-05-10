#include<stdio.h>
#include<ctype.h>
int main()
{
	char letter = 0;
	
	printf("Enter an upper case letter");
	scanf("%c", &letter);
	
	if(isalpha(letter) && isupper(letter))	//Verify uppercase letter
	{
		letter >= 'a'-'A';
		printf("You entered an uppercase%.\n", letter);
	}
	else
	printf("You did not enter an uppercase letter.\n");
	return 0;
}
