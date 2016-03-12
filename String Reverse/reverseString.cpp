#include<iostream>
#include<string>
using namespace std;

int main(){
	string str = "My Name Is Rishabh";
	int n;
	string rev ="";
	int itr = 0;
	int sp = 0;
	n = str.length();
	for(int i=0; i<= n; i++){
		if(str[i] == ' ' || str[i] == '\0'){
			for(int j=i-1; j>=itr; j--){
				rev += str[j];
			}
			itr = i+1;
			rev += " ";
		}
	}
	cout<<endl<<str<<endl;
	cout<<rev;
	return 0;
}
