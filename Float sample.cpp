#include<stdio.h>
int main(void)
{
	float plank_lenght = 10.0f;			//In feet
	float piece_count = 4.0f;			//Number of equal pieces
	float piece_lenght = 0.0f;			//Lenght of a piece in feet
	piece_lenght= plank_lenght/piece_count;
	printf("A plank of %f feet long can be cut into %f pieces %f feet long. \n", plank_lenght, piece_count, piece_lenght);
	return 0;
}
