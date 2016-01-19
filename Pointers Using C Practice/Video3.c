/*
Pointer Type,Void Pointers and Pointer Arithmetic
*/
#include<stdio.h>

void main()
{
	int a = 1025;
	int *p;
	p = &a;
	printf("Size of Integer is %d bytes\n",sizeof(int));
	printf("Address of p = %d, Value of p = %d \n",p,*p);
	printf("Address of p+1 = %d, Value of p+1 = %d \n",p+1,*(p+1));
	char *p0;
	//Typecasting
	p0 = (char*)p;	//P is having the address of a.
	printf("Size of character is %d bytes\n",sizeof(char));
	printf("Address of p0 = %d, Value of p0 = %d \n",p0,*p0);
	/*
	1025 = 00000000 00000000 00000100 00000001  --> In Binary(4 Bytes)
	So while the pointer type is of integer it checks for 4 bytes from the starting address,
	But when it is typecasted to character pointer which is of 1 Byte it checks for only one Byte :- 00000001 = 1.
	So, if we add 1 to this char pointer it will display the next byte which is 00000100 = 4.
	*/
	printf("Address of p0+1 = %d, Value of p0+1 = %d \n",p0+1,*(p0+1));
}
