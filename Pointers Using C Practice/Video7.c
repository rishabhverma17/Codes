/*
	Array as Function Argument
*/
#include<stdio.h>

void Double(int* A,int size)	//int* A is Equal to int A[]
{
	int i, sum = 0;
	for(i = 0; i<= size; i++)
	{
		A[i] = 2*A[i];
	}
}

int main()
{
	int A[] = {2,4,6,8};
	int size = sizeof(A)/sizeof(A[0]);
	Double(A,size);
	for(int i = 0; i < size; i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
