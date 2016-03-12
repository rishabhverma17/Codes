#include<iostream>
using namespace std;

char flip(char num){
	return (num == '0') ? '1' : '0';
}
int main(){
	string num = "1100";
	string once = "";
	string twos = "";
	int i;
	int n = num.length();
	for(i = 0; i < n; i++){
		once += flip(num[i]);
	}
	twos = once;
	for(i = n-1 ; i >= 0; i--){
		if(once[i]== '1'){
			twos[i] = '0';
		}
		else if(once[i] == '0'){
			twos[i] = '1';
			break;
		}
		else if (i == -1)
        	twos = '1' + twos;
	}
	cout<<"1's Compliment of "+num + " is " +once + "\n";
	cout<<"2's Compliment of "+num + " is " +twos;
	return 0;
}			
