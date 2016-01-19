#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>

struct Node{
	int Data;
	struct Node* Next;
};
struct Node* Head;

void Insert(int pos,int data)
{
	int i;
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->Data = data;
	temp1->Next = NULL;
	//Inserting at position 1
	if(pos == 1){
		temp1->Next = Head;
		Head = temp1;
		return;
	}
	//Inserting at position other than 1
	struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
	temp2 = Head;
	for(i = 0; i<pos-2; i++)
	{
		temp2 = temp2->Next;
	}
	temp1->Next = temp2->Next;
	temp2->Next = temp1;

}
void Print()
{
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1 = Head;
	while(temp1 != NULL)
	{
		printf("%d ",temp1->Data);
		temp1 = temp1->Next;
	}
}
int main(){
	Head = NULL;
	//int i,x,n;
	Insert(1,2);
	Insert(2,3);
	Insert(1,4);
	Insert(2,5);
	Print();
	return 0;
}
