#include<iostream>
#include<conio.h>

using namespace std;

//Template Program
template <class x>
x bigger(x a, x b)
{
	if (a>b)
		return (a);
	else
		return (b);
};

int main()
{
	cout<<bigger(4,8);
	cout<<"\n"<<bigger(9,5);
	getch();
}
