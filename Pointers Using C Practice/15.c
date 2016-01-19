/*
	Function Pointer
*/
#include<stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int Result;
	int (*ptr) (int,int);	//Declaring Function Pointer.
	ptr = &Add;		//Passing address of function to pointer.
	//ptr = Add; is same as ptr = &Add;
	Result = (*ptr) (2,5);		//Calling of Function through Pointer.
	//Result =  ptr(2,5); is same as Result = (*ptr) (2,5);
	printf("%d\n",Result);
	return 0;
}
