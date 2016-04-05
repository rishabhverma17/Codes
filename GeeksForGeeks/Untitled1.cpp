#include<iostream>
#include<string>
using namespace std;

int main(){
	string str = "Rishabh";
	int n;
	string rev ="";
	n = str.length();
	for(int i=n; i>= 0; i--){
		rev += str[i];
	}
	cout<<endl<<str<<endl;
	cout<<rev;
	return 0;
}
