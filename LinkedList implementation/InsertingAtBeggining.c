#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>

struct Node{
	int Data;
	struct Node* Next;
};
struct Node* Head = NULL;

void Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	if(Head != NULL)//List is Not Empty
	{
		temp->Data = x;
		temp->Next = Head;
		Head = temp;
	}
	else{
		temp->Data = x;
		temp->Next = NULL;
		Head = temp;
	}
}
void Print()
{
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1 = Head;
	while(temp1 != NULL)
	{
		printf("%d -->",temp1->Data);
		temp1 = temp1->Next;
	}
}
int main(){
	//Head = NULL;
	int i,x,n;
	printf("How many Nodes You Want to Insert\n");
	scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter Data\n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
	return 0;
}
