/*
	Pointers To Pointers
*/
#include<stdio.h>

void main()
{
	int x = 5;
	int *p;
	p = &x;
	printf("Address of x %d and address stored at pointer P %d\n",&x,p);
	int **q;	//Pointer To Pointer.
	printf("Value of *p = %d\n",*p);
	q = &p;
	printf("Value of *q = %d\n",*q);
	printf("Value of *(*q) = %d\n",**q);
	int ***r;	//Pointer To pointer To Pointer.
	r = &q;
	printf("Value of *(*r) = %d\n",**r);
	printf("Value of *(*(*r)) = %d\n",***r);
	***r = 12;
	printf("New Value of x is %d\n",x);
	printf("New Value of x is %d\n",***r+1);
}
