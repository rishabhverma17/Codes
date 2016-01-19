/*
Removing Duplicate values from an array.
*/
#include<iostream>
#include<conio.h>
using namespace std;

int arrSort(int array[], int size)
{
	int temp =0 ;
	for(int i = 0; i <= size-1; i++)
	{
		for(int j = 0; j <= size-2; j++)
		{
			if(array[j]>array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	return array[size];
}
int main()
{
	int size;
	puts("Enter Size of array");
	cin>>size;
	int arr[size];

	for(int i=0;i<size;i++)
	{
		cout<<"Enter element "<<i<<" - ";
		cin>>arr[i];
		cout<<"\n";
	}
	arrSort(arr,size);
	for(int i=0;i<size;i++)
	{
		if(arr[i] == arr[i+1])
		{
			i++;
		}
		cout<<arr[i];
		cout<<"\n";
	}
	return 0;
}
