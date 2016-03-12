#include<iostream>
#include<string>
using namespace std;

int sort(int arr1[], int size){
	int temp = 0;
	for(int i = 0; i <= size-1; i++){
		for(int j=0; j <= size-2; j++){
			if(arr1[j] > arr1[j+1]){
				temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = temp;
			}
		}
	}
	return arr1[size];
}
int main()
{
	string input;
	cout<<"Enter String 1\n";
	cin>>input;
	//Finding Length of string
	int n;
	n = input.length();
	cout<<"Lenght of String "+input +" is ";
	cout<<n;
	cout<<endl;
	int arr[n];
	//Converting to ASCII values 
	for(int i =0; i<n;i++){
		arr[i] = input[i];
	}
	//Printing
	for(int j= 0 ; j< n; j++){
		cout<<arr[j];
		cout<<" Equlivalent to ";
		cout<<input[j]<<endl;
	}
	//Sorting Array
	sort(arr,n);
		for(int k= 0 ; k< n; k++){
		cout<<arr[k]<<endl;
	}
	return 0;
}
