#include<stdio.h>

void main()
{
	int a = 10;
	int b = 20;
	int *p;
	p = &a;					//Passing Address of a to p.
	printf("Value of a is %d\n",a);
	printf("Value of *p is %d\n",*p);
	*p = 12;				//Changing the Value from pointer.
	printf("New Value of *p is %d\n",*p);
	
	//Pointer Arithmetic only addition and substraction are allowed and they are limited to some data types.
	printf("Address p is %d\n",p);
	printf("Size of Integer is %d\n",sizeof(int));
	printf("Address p+1 is %d\n",p+1);
	*p = b;					//It only changes the value,But it will hold the address as before
	//This results in change in value of a from 12 to 20.n
	printf("Value of a is %d\n",a);
	printf("Value of *p is %d\n",*p);
	printf("Address p is %d\n",p);
}
