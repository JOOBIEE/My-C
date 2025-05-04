#include<stdio.h>
int main()
{
	float plank_lenght = 10.0f;
	float piece_count = 4.0f;
	float piece_lenght = 0.0f;
	piece_lenght = plank_lenght/piece_count;
	printf("A plank %.2f feet long can be cut into %.2f pieces %.2f feet long.\n", plank_lenght, piece_count, piece_lenght);
	return 0;
	
}
