//memory efficent double linked list
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
	int data;
	struct NODE *pxn;
}Node;
Node *first=NULL;

Node *insertfront(Node *,int );
Node *xor(Node *,Node *);
void f_print(Node *);
void b_print(Node *);
int main()
{
	Node *head=NULL;
	int N_nodes,N_ele,Count_nodes=1,ch;
	
while(1)
{

	printf("\nenter 1.Insert\t2.forward Print\t3.Backward print\n");
	scanf("%d",&ch);

 
switch(ch)
{
case 1:
	printf("\nEnter number of nodes you want\n");
	scanf("%d",&N_nodes);
	while(N_nodes--)
	{

		printf("\nEnter the %d node element\n",Count_nodes++);
		scanf("%d",&N_ele);

		head=insertfront(head,N_ele);//insert elements
	}
	break;

case 2:
	f_print(head);
	break;
case 3:
	b_print(first);
	break;
default :
	printf("choose proper option\n");
}
}
}
Node *xor(Node *a,Node *b)
{
	//return (Node *)(a ^ b);
	return (Node *)((uintptr_t )a ^ (uintptr_t )b);//typedef unsigned long uintptr_t;
}
Node *insertfront(Node *head,int N_ele)
{
	Node *new=(Node *)malloc(sizeof(Node));
	new->data=N_ele;
		if(head==NULL)
			first=new;
		new->pxn=xor(head,NULL);//new->pxn=head;
	if(head!=NULL)
	{
		Node *temp;
		temp=xor(head->pxn,NULL);//temp=head->pxn;
		head->pxn=xor(new,temp);		
	}
	 head=new;
}

void f_print(Node *head)
{
	Node *temp=head;
	Node *next;
	Node *prev=NULL;
	while(temp!=NULL)
	{
		printf("%d----->",temp->data);
		
		next=xor(prev,temp->pxn);
		prev=temp;
		temp=next;
	}
	printf("\n\n\n\n");
}
void b_print(Node *head)
{
	Node *temp=head;
	Node *next=NULL;
	Node *prev=NULL;
	while(temp!=NULL)
	{
		printf("%d----->",temp->data);
		
		prev=xor(next,temp->pxn);
		next=temp;
		temp=prev;
	}
	printf("\n\n\n\n");
}
	
