#include<stdio.h>
int main()
{
	int cookies=5;
	int cookie_calories =125;
	int total_eaten = 0;
	
	int eaten = 2;
	cookies = cookies-eaten;
	total_eaten = total_eaten + eaten;
	printf("\nI have eaten %d more. There are %d cookies left", eaten, cookies);
	
	eaten = 3;
	cookies = cookies - eaten;
	total_eaten = total_eaten + eaten;
	printf("\nI have eaten %d more. Now there are %d cookes left \n",eaten,cookies);
	printf("\nTotal energy consumed is %d calories.\n", total_eaten*cookie_calories);
	return 0; 
	
}
