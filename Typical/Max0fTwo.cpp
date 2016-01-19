/*
Que : Write a method which finds the maximum of two numbers. You should not use if-else or any other comparison operator.
EXAMPLE
Input: 5, 10
Output: 10
*/
#include<iostream>
using namespace std;
int getMax(int a,int b)
{
	int c = a - b;
	int k = (c >> 31) & 0x1;
	int max = a - k * c;
	return max;
}
int main()
{
	int x = 20, y = 100;
	int result = getMax(x,y);
	cout<<result;
	return 0;
}
/*
Explanation :
Let’s try to solve this by “re-wording” the problem. We will re-word the problem until we get something that has removed all if statements.
Rewording 1: If a > b, return a; else, return b.
Rewording 2: If (a - b) is negative, return b; else, return a.
Rewording 3: If (a - b) is negative, let k = 1; else, let k = 0. Return a - k * (a - b).
Rewording 4: Let c = a - b. Let k = the most significant bit of c. Return a - k * c.
*/
