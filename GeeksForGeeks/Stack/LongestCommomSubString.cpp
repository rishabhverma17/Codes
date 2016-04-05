/*
	Name: Rishabh Verma
	Copyright: Rishabh Verma
	Author: Rishabh Verma
	Date: 05-03-16 15:10
	Description: Length of the longest valid substring.
*/
#include<iostream>
#include<stack>
using namespace std;

int Maxlen(string str){
	int n;
	n = str.length();
	//Creating Stack
	stack<int> myStack;
	myStack.push(-1);
	int result = 0;
	for(int i=0; i< n; i++){
		if(str[i] == '('){
			myStack.push(i);
		}
		else{
			myStack.pop();
			if(!myStack.empty()){
				result = max(result,i-myStack.top());
			}
			else{
				myStack.push(i);
			}
		}
	}
	return result;
}
int main(){
	string check = "((()()";
	cout<<Maxlen(check);
	return 0;
}
