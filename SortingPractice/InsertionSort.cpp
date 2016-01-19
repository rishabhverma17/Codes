//Insertion Sort Implementation
#include<iostream>
#include<conio.h>

using namespace std;

int arrInput(int arr[],int n)
{
	for(int i = 0; i<n;i++)
	{
		cout<<"Enter element no "<<i<<" --> ";
		cin>>arr[i];
		cout<<"\n";
	}
	return arr[n];
}

// Sorting
int arrSort(int array[],int siz)
{
	int temp = 0;
	for(int i = 1; i <= siz-1; i++)
	{	
		for(int j = i; j >= 1; j--)
		{
			if(array[j] < array [j-1])
			{
				//swap(array[j],array[j-1]);
				temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
			}
		}
	}
	return array[siz];
}

int main()
{
	int size;
	cout<<"Enter Size of array\n";
	cin>>size;
	int arryUS[size];
	arrInput(arryUS,size);
	arrSort(arryUS,size);

	// Printing
	for(int k = 0; k<size;k++)
	{
		cout<<arryUS[k];
		cout<<"\n";
	}
	return 0;
}

