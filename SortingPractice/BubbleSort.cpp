// Bubble Sort Imlementation
#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

//Array Input
int arrInput(int arrI[], int n)
{
	cout<<"Enter elements of array\n";
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter element no "<<i<<" --> ";
		cin>>arrI[i];
		cout<<"\n";
	}
	return arrI[n];
}

//Array Sorting
int arrSort(int arr[],int siz)
{
	int temp = 0;
	for(int j = 0; j <= siz-1 ; j++) 
	{
		for(int i = 0; i <= siz-2; i++)
		{
			if(arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	return arr[siz];
}

//Print array
int arrPrint(int arrP[],int p)
{
	for(int i = 0 ; i < p; i++)
	{
		cout<<"Element "<<i<<" is "<<arrP[i]<<"\n";
	}
	return 0;
}
int main()
{
	int size;
	cout<<"Enter size of array\n";
	cin>>size;
	int array[size];
	arrInput(array,size);
	//sort(array,size);
	arrSort(array,size);	
	arrPrint(array,size);
	return 0;
}
