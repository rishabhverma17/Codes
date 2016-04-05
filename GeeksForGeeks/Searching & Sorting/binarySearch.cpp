#include<iostream>
using namespace std;

int binary(int arr[],int element, int last, int first){
	if(last >= first){
		//Finding Middle Index of Array.
		int mid = first + (last-1)/2;
		
		if(arr[mid] == element){
			return mid;
		}
		else if(element < arr[mid]){
			return binary(arr,element,mid-1,first);
		}
		else if(element > arr[mid]){
			return binary(arr,element,last,mid+1);
		}
		return -1;
	}
}
int main(){
	int arr[] = {2,3,4,10,40};
	int size = sizeof(arr)/sizeof(arr[0]);
	int element = 10;
	int result = binary(arr,element,size-1,0);
	(result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
}
