#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <stdio_ext.h>
static int Count_nodes;
typedef struct node
{
	int data;
	struct node* Nlink;
}NODE;

NODE *head=NULL,*Ctemp=NULL;
//PUSH operation
void *Insertfront(NODE *Temp,int *N_ele)
{
	//create node
	NODE *New=(NODE *)malloc(sizeof(NODE));
	if(New==NULL)
	{
		printf("memory not available\n");
		return ;
	}
	New->data=*N_ele;
	New->Nlink=NULL;
	if(head==NULL)
	{
		head=New;
		head->Nlink=head;
		Ctemp=head;
	}
	else
	{	
		Ctemp->Nlink=New;
		New->Nlink=Temp;
		head=New;
	}

	
}

//display function

void *Print_LL(NODE *Temp)
{	
	
		if(head==NULL)
		{
			printf("\n...................EMPTY stack................\n");
			return 0;
		}
		while(head!=Temp->Nlink)
		{	

			printf("data:%d\tOwn address:%p\tnext address ::%p\n",Temp->data,Temp,Temp->Nlink);
			Temp=Temp->Nlink;
		}
		if(Ctemp->Nlink==Temp->Nlink)
		{
			printf("data:%d\tOwn address:%p\tnext address ::%p\n",Temp->data,Temp,Temp->Nlink);
		}
}
 //delete operation(POP)
void *Deletefront(NODE *Temp)
{
	
	if(head==NULL)
		printf("\n...................Empty stack...................\n");
	else
	{	
		head=Temp->Nlink;
		if(Ctemp==Ctemp->Nlink)
			head=NULL;
		Ctemp->Nlink=head;
		free(Temp);
	}
	
}
/* Return top element */
int topelement()
{
    return(head->data);
}

/* Check if stack is empty or not */
void empty()
{
	if (head == NULL)
		printf("\n Stack is empty\n");
	else
		printf("\n Stack is not empty with %d elements\n", Count_nodes);
}


/* Count stack elements */
void stack_count()
{
	printf("\n No. of elements in stack : %d\n", Count_nodes);
}


/* Destroy entire stack */
NODE *destroy(NODE *Temp)
{
	while (Ctemp->Nlink!=head->Nlink)
        {
		head=Temp->Nlink;
		free(Temp);
		Temp=head;
        
    	}
    	free(Temp);
    	head = NULL;
 
    	printf("\n All stack elements destroyed\n");
    	Count_nodes = 0;
}

//main function
int main()
{
	int N_ele,e;
	char ch;

while(1)
{	
	__fpurge(stdin);
	printf("...........Enter your choice ........\n1.Push\n2.POP\n3.Top of element\n4.Empty\n5.Exit\n6.Print all elements from stack\n7.Stack_Count\n8.Destroy\n");
	scanf("%c",&ch);	
	switch( ch )
	{
		case '1':	
			Count_nodes++;
			printf("Enter the %d node element\n",Count_nodes);
			scanf("%d",&N_ele);
			Insertfront(head,&N_ele);//insert elements
			break;
		case '2':
			Deletefront(head);//pop
			if(Count_nodes!=0)
				Count_nodes--;
			break;
		case '3':		
			if (head == NULL)	//top element
                		printf("No elements in stack");
          		else
          		{
                		 e = topelement();
               			 printf("\n Top element : %d", e);
            		}
			break;
		case '4':
            		empty();
            		break;
        	case '5':
        	        exit(0);
		case '6':
			Print_LL(head);//printing elements
			break;
		case '7':
            		stack_count();
            		break;
		case '8':
            		destroy(head);
            		break;
		default:
			printf("Inavllid entry choose correct option\n");
			break;

	}
	printf("\n");
	
}
return 0;

}
