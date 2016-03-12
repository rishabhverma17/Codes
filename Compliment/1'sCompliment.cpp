#include<iostream>
using namespace std;

char flip(char num){
	return (num == '0') ? '1' : '0';
}
int main(){
	string num = "1100";
	string out = "";
	int i;
	int n = num.length();
	for(i = 0; i < n; i++){
		out += flip(num[i]);
	}
	cout<<out;
	return 0;
}
