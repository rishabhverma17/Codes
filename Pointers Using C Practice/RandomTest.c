#include<stdio.h>
#include<string.h>

void print(char *p)
{
	while(*p != '\0')
	{
		printf("%c",*p);
		p++;
	}
}

int main()
{
	char *C = "Hello";
	print(C);
	return 0;
}
