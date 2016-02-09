/*
	Name: Rishabh Verma
	Copyright: Rishabh Verma	
	Author: Rishabh Verma
	Date: 08-02-16 18:25
	Description: Singly Linked List Insertion Operations
*/

#include<malloc.h>
#include<stdlib.h>
#include<stdio.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* head = NULL;

void insert_atBeg(int x){
	//Creating Node for Insertion
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	
	//If List is Not Empty
	if(head != NULL){
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	else{
		//If list is Empty
		temp->data = x;
		temp->next = NULL;
		head = temp;
	}
}
void Insert_at_end(int x){
	struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* current = (struct Node*)malloc(sizeof(struct Node));
	current->data = x;
	current->next = NULL;
	if(head == NULL){
		head = current;
		return;
	}
	else{
		temp2 = head;
		while(temp2->next != NULL){
			temp2 = temp2->next;
		}
		temp2->next = current;
		return;
	}
}
void insert_at_any(int x,int pos){
	struct Node* temp3 = (struct Node*)malloc(sizeof(struct Node));
	temp3->data = x;
	temp3->next = NULL;
	if(pos == 1){
		insert_atBeg(x);
		return;
	}
	struct Node* temp4 = (struct Node*)malloc(sizeof(struct Node));
	temp4 = head;
	for(int i = 0; i< pos-2;i++)
	{
		temp4 = temp4->next;
	}
	temp3->next = temp4->next;
	temp4->next = temp3;
}
void Print(){
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1 = head;
	while(temp1 != NULL)
	{
		printf("%d -->",temp1->data);
		temp1 = temp1->next;
	}
}
int main(){
	insert_atBeg(5);
	insert_atBeg(10);
	Insert_at_end(44);
	insert_at_any(100,3);
	Insert_at_end(440);
	insert_atBeg(1);
	Print();
	/*int i,x,n;
	printf("How many Nodes You Want to Insert\n");
	scanf("%d",&n);
	for(i = 0; i<n; i++){
		printf("\nEnter Data\n");
		scanf("%d",&x);
		insert_atBeg(x);
		Print();
	}*/
	return 0;
}
