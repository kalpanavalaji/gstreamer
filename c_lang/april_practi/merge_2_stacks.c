#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
	int data;
	struct stack *link;
}Stack;


Stack *head3=NULL;
Stack *push(Stack *temp,int ele)//insert front
{
	Stack *new=(Stack *)malloc(sizeof(Stack));
	new->data=ele;
	new->link=NULL;
	if(temp==NULL){
		temp=new;

	}
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
	//printf("temp->data\ttemp->link\ttemp\n");
	while(temp!=NULL)
	{
		//printf("%d\t %p \t %p \n",temp->data,temp->link,temp);
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
int main()
{
	Stack *head=NULL,*head1=NULL;
	int ele,ch;
	//char ch;
	
	while(1)
	{
			
	printf("\nenter 1.Push stack1\t2.Push stack2\t3.Stack1 Display\t4.Stack2 Display\t5.Merge 2nd stack on top of stack 1\t6.pop from Stack1\t 7.pop from Stack2\n");
	scanf("%d",&ch);
	fflush(stdout);


	switch(ch)
	{
	case 1:
		printf("enter element\n");
		scanf("%d",&ele);
		head=push(head,ele);
		break;
	case 2:
		printf("enter element\n");
		scanf("%d",&ele);

		head1=push(head1,ele);
		if(head1->link==NULL)
				head3=head1;
		break;
	case 3:
		printf("Stack1 list\n");
		display(head);
		break;
	case 4:
		printf("\nStack2 list\n");
		display(head1);
		break;
	case 5:
		printf("\nMerge 2 stack lists\n");//2nd stack is top of 1st stack list	
		head3->link=head;
		break;
	case 6:
		head=pop(head);
		break;
	case 7:
		head1=pop(head1);
		break;
	default:
		printf("choose correct case\n");

	}
	}

}







































/*head=push(head,1);

	head=push(head,2);
	head=push(head,3);
	
	printf("Stack1 list\n");
	display(head);
	
	head1=push(head1,4);
	head1=push(head1,5);
	head1=push(head1,6);
	
	printf("\nStack2 list\n");
	display(head1);

	printf("\nMerge 2 stack lists\n");//2nd stack is top of 1st stack list	
	head3->link=head;
	display(head1);*/
	
