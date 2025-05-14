#include<stdio.h>
int main()
{
	unsigned int original = 0xABC;
	unsigned int result = 0;
	unsigned int mask = 0xf;
	
	printf("\n original = %X", original);
	
	//Insert first Digit
	result|= original & mask; //Put right 4 bits from original in result
	
	//Second Digit
	original >>=4;				//Shfts original by 4
	result <<=4;				//MAke room for next digit
	result |=original&mask;		//Right 4 bits from original in result
	
	//GEt third Digit
	original >>= 4;				//Shift original by four positions
	result <<= 4;				//MAke room for next digit	
	result |=original&mask;		// Put right 4 bits from original in result
	
	printf("\t rsult = %X\n", result);
	return 0;
	
		
}
