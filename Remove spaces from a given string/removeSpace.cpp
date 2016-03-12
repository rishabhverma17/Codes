/*
	Name: Rishabh Verma
	Date: 06-03-16 12:11
	Description: Remove spaces from a given string
	Given a string, remove all spaces from the string and return it.
	Example:
	Input:  "g  eeks   for ge  eeks  "
	Output: "geeksforgeeks"
	Expected time complexity is O(n) and only one traversal of string.
*/
#include<iostream>
#include<string>
using namespace std;
void removeSpaces(string str){
	string final = "";
	int count = 0;
	int n = str.length();
	for(int i=0; i <= n-1; i++){
		//cout<<str[i]<<" "<<i<<endl;
		if(str[i] == ' '){
			continue;
		}
		else{
			final += str[i]; 
		}
	}
	int k = final.length();
	cout<<endl<<"Input was - |"<<str<<"| - Total Length is - "<<n<<endl;
	cout<<endl<<"After Removing Spaces - |"<<final<<"| - Now Length is - "<<k;
}
int main(){
	string str = "g  eeks   for ge  eks  ";
	string final = "";
	removeSpaces(str);
	//int k = final.length();
	//cout<<endl<<k;
	return 0;
}
