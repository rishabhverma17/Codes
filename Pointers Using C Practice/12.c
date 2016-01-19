/*
	Pointers and Dynamic Memory
*/
#include<stdio.h>

int square(int z)
{
	int square = z * z;
	return square;
}
int sumOfSquare(int x,int y)
{
	int sq = square(x+y);
	return sq;
}
int main()
{
	int a = 5, b = 10;
	int Result = sumOfSquare(a,b);
	printf("Sum Of Squares is %d\n",Result);
	return 0;
}
