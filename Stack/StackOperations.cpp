/*
	Name: Rishabh verma
	Copyright: Rishabh
	Author: Rishabh Verma
	Date: 05-03-16 15:03
	Description: Stack implementation in CPP.
*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> myStack;
	for(int i =0; i<=5; i++){
		myStack.push(i);
	}
	cout<<"Size of Stack is "<<myStack.size()<<endl;
	while(!myStack.empty()){
		cout<<myStack.top()<<endl;
		myStack.pop();
	}
	return 0;
}
