/*
	Pointers and Arrays.
*/
#include<stdio.h>

int main()
{
	int arr[] = {2,4,6,8,10};
	printf("Address of First element = %d\n",arr);
	printf("Address of First element = %d\n",&arr[0]);
	printf("Value of First element = %d\n",arr[0]);
	printf("Value of First element = %d\n",(*arr));
	for(int i = 0; i <= 4; i++)
	{
		printf("Address = %d\n",arr + i);
		printf("Address = %d\n",&arr[i]);
		printf("Value = %d\n",*(arr+i));
		printf("Value = %d\n",arr[i]);
		printf("------------------------\n");
	}
	return 0;
}
