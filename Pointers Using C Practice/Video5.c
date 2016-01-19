/*
	Call By Value and Call by Reference.
*/
#include<stdio.h>

void CallByValue(int v)
{
	printf("Input Value in CallByValue Method is %d\n",v);
	v = v + 1;
}
void callbyReference(int *p)
{
	printf("input value in CallByReference Method %d\n",(*p));
	*p = (*p) + 1;
}

int main()
{
	int a = 10;		//Local variable
	CallByValue(a);	//Call by value
	printf("The new value of Variable (a) by CallByValue method is %d\n",a);
	callbyReference(&a);	//Call By Reference
	printf("The new value of Variable (a) by CallByReference method is %d\n",a);
	return 0;
}
