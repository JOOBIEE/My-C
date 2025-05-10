#include<stdio.h>

int main()
{
	int choice;
	
	//Get the input
	printf("Pick a number between 1 and 9 and you may win a prize!");
	scanf("%d", &choice);
	
	//Check for an invalid selection
	if ((choice>10) || (choice<1))
	choice = 11;		//Invalid Message Choice
	
	switch(choice)
	{
		case 7:
			printf("Congratulations!\n");
			printf("You win 2 bscuits!\n");
			break;
		case 2:
			printf("You win the phonen charger");
			break;
			
		case 10:
		printf("Alaye na 1-9 we talk");
		break;
			
		
			
			
	}
	return 0;
}
