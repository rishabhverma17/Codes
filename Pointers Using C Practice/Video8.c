/*
	Character Arrays and Pointers
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char B[5] = {'R','I','S','H','I','\0'};
	char C[] = "RISHABH";
	int len = strlen(C);
	printf("%s\n",B);
	printf("Length of %s is %d\n",C,len);
	char C1[6] = "Hello";
	char* C2;
	C2 = C1;
	printf("%c\n",*(C2+4));	//*(C2 + 4) is same as C2[4].
	return 0;
}
