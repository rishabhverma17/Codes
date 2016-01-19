/*
Que : Write a function that adds two numbers. You should not use + or any arithmetic operators.
*/
#include<iostream>
using namespace std;

int add_no_arrith(int a, int b)
{
	if(b==0){
		return a;
	}
	int sum = a^b;//Adding without carrying
	int carry = a&b;//Just adding the carry-overs
	return add_no_arrith(sum,carry);//Recusrion
}
int main()
{
	int x = 10, y = 20;
	int result = add_no_arrith(x,y);
	cout<<result;
	return 0;
}
/*
Explanation : 
To investigate this problem, let’s start off by gaining a deeper understanding of how we add numbers. We’ll work in Base 10 so that it’s easier to see. To add 759 + 674, I would usually add digit[0] from each number, carry the one, add digit[1] from each number, carry the one, etc. You could take the same approach in binary: add each digit, and carry the one as necessary.
Can we make this a little easier? Yes! Imagine I decided to split apart the “addition” and “carry” steps. That is, I do the following:
1. Add 759 + 674, but “forget” to carry. I then get 323.
2. Add 759 + 674 but only do the carrying, rather than the addition of each digit. I then get 1110.
3. Add the result of the first two operations (recursively, using the same process described in step 1 and 2): 1110 + 323 = 1433.
Now, how would we do this in binary?
1. If I add two binary numbers together but forget to carry, bit[i] will be 0 if bit[i] in a and b are both 0 or both 1. This is an XOR.
2. If I add two numbers together but only carry, I will have a 1 in bit[i] if bit[i-1] in a and b are both 1’s. This is an AND, shifted.
3. Now, recurse until there’s nothing to carry.
*/
