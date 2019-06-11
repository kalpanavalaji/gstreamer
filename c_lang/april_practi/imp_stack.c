#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
	int data;
	struct stack *link;
}Stack;



Stack *push(Stack *temp,int ele)//insert front
{
	Stack *new=(Stack *)malloc(sizeof(Stack));
	new->data=ele;
	new->link=NULL;
	if(temp==NULL)
		temp=new;
	else{
			new->link=temp;
			temp=new;
		}
	return temp;
}
Stack *pop(Stack *temp)//delete front
{
	if(temp==NULL)
		printf("Stack is empty\n");
	Stack *temp1;
	temp1=temp->link;
	free(temp);
	return temp1;
}
void *display(Stack *temp)
{
	if(temp==NULL){
		printf("Stack is empty\n");
		return 0;
	}
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
int main()
{
	Stack *head=NULL,*head1=NULL;
	head=push(head,1);
	head=push(head,2);
	head=push(head,3);
	
	printf("Stack1 list\n");
	display(head);
	
	head1=push(head1,4);
	head1=push(head1,5);
	head1=push(head1,6);
	
	printf("Stack2 list\n");
	display(head1);

}
	
