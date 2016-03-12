/*
Reverse an array without affecting special characters.
Input:   str = "a,b$c"
Output:  str = "c,b$a"
Note that $ and , are not moved anywhere.
*/
#include<iostream>
#include<string>
using namespace std;

bool isAlpha(char x){
	return((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}

int main(){
	string str = "a!!!b.c.d,e'f,ghi";
	int n,i,j;
	n = str.length();
	string rev ="";
	
	for(i=n-1; i>=0; i--){
		rev += str[i];
	}
	for(j=0; j<=n-1; j++){
		if(isAlpha(str[j])){
			str[j] = rev[j];
		}
		else{
			i++;
		}
	}
	//a!!!b.c.d,e'f,ghi
	cout<<"Reverse of a!!!b.c.d,e'f,ghi is "<<rev<<endl;
	cout<<"Now its "<<str;
	return 0;
}
