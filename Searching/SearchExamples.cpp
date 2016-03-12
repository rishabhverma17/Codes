/*
	Name: Rishabh verma
	Date: 06-03-16 12:45
	Description: Searching Examples.
*/
#include<iostream>
#include<string>
using namespace std;

//Linear search
int Linear(int arr[],int element,int size){
	int i;
	for(i=0; i<=size; i++){
		if(arr[i] == element){
			return i;
		}
	}
	return -1;
}
//Binary Searching
int Binary(int array[], int first, int last,int element){
	if(last >= first){
		//Finding the middle Element
		int mid = (first + (last-1))/2;
		if(array[mid] == element){
			return mid;
		}
		else if(array[mid] > element){
			//Update last
			return Binary(array,first,mid - 1,element);
		}
		else if(array[mid] < element){
			//Update First
			return Binary(array,mid+1,last,element);
		}
	}
	//If No match found
	return -1;
}
int main(){
	int array[] = {2,4,6,8,10,12,14,16,18,20};
	//Finding lenght  of array
	int len = sizeof(array)/sizeof(array[0]);
	cout<<"Length of array "<<len<<endl;
	int first = array[0];
	int last = array[len-1];
	//find 6
	int resultBin = Binary(array,first,last,18);
	int resultLin = Linear(array,18,len);
	(resultBin == -1)? cout<<"Using Binary Search Element Not Found " : cout<< "Using Binary Search Element Found at "<<resultBin<<" Position"<<endl;;
	cout<<"Using linear Search "<<resultLin<<endl;
	//cout<<"Using Binary Search "<<resultBin;
	return 0;
}
