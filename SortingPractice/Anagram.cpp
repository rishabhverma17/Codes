//Anagram Problem 
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int printArray(int array[],int siz)
{
	cout<<"\nSorted Array\n";
	for(int k = 0; k < siz; k++)
	{
		cout<<array[k];
		cout<<"\n";
	}
	return 0;
}

int arrSort(int arr[], int size)
{
	int temp = 0;
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			} 
		}
	}
	return arr[size];
}

int compareArray(int a1[], int a2[],int length)
{
	for(int i = 0; i <= length; i++)
	{
		if(a1[i] == a2[i])
		{
			return true;
		}
		else
			return false;
	}
}

int main()
{
	int len1,len2;
	string text,text1;
	cout<<"Enter a First string\n";
	cin>>text;
	cout<<"Enter a Second string\n";
	cin>>text1;

	int arr1[text.length()];
	for(int i = 0; i < text.length();i++)
	{
		//cout<<"ascii value of "<<text.at(i)<<" "<<(int) text.at(i)<<"\n";		//just to test
		arr1[i] = (int) text.at(i);
	}
	len1 = sizeof(arr1)/sizeof(int);
	arrSort(arr1,text.length());
	//printArray(arr1,len1);		//For checking output
	
	int arr2[text1.length()];
	for(int j = 0; j < text1.length(); j++)
	{
		//cout<<"ascii value of "<<text1.at(j)<<" "<<(int) text1.at(j)<<"\n";   //Just to test!!
		arr2[j] = (int) text1.at(j);
	}
	len2 = sizeof(arr2)/sizeof(int);
	arrSort(arr2,len2);
	//printArray(arr2,len2); 	//For checking output
	
	if(len1 == len2)
	{
		compareArray(arr1,arr2,len1);
		if(compareArray(arr1,arr2,len1) == true)
			cout<<"\nAnagram";
		else
			cout<<"\nNot a Anagram";
	}
	else
		cout<<"Not a Anagram";
	return 0;
}
