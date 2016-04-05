/*Use of memset in C
The C library function void *memset(void *str, int c, size_t n) copies the character c (an unsigned char) 
to the first n characters of the string pointed to, by the argument str.
*/
#include<stdio.h>
#include<string.h>


int main(){
	char str[] = "Every Programmer should know memset ";
	memset(str,'#',5);
	puts(str);
	return 0;
}
