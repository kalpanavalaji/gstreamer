#include<stdio.h>
#include<stdlib.h>
 typedef struct node
  {
	int data;
	struct node* Nlink;
  }NODE;

//Reverse the linked list
NODE *ReverseLinked(NODE **Head)
{
	NODE *P_prev=NULL,*Prev=NULL;
	NODE *temp= *Head;

	while(temp!=NULL)
	{
		Prev=temp;
		temp=temp->Nlink;
		Prev->Nlink=P_prev;
		P_prev=Prev;
	}
	return P_prev;
}
//Insert end function
NODE *insertend(NODE *Temp,int N_ele)
{
	NODE *New=create_node(Temp,N_ele);
	if(Temp==NULL)
	{
		return New;
	}
	else
	{
		NODE *Prev=Temp;
		while(Temp->Nlink!=NULL)
		{
			Prev=Temp;
			Temp=Temp->Nlink;
		}
		Temp->Nlink=New;
		return Temp;
	}
}
NODE *insertfront(NODE **Head,int *N_ele)
{


//create node
	NODE *New=(NODE *)malloc(sizeof(NODE));
	New->data=*N_ele;
	New->Nlink=NULL;
	if(*Head==NULL)
	{
		return *Head=New;
	}
	else
	{
		NODE *Temp=*Head;
		New->Nlink=Temp;
		return *Head=New;
	}

	
}

//display function

void Print_LL(NODE **Head)
{
	NODE *Temp=*Head;
	while(Temp!=NULL)
	{
		printf("data:%d\tOwn address:%p\tnext address ::%p\n",Temp->data,Temp,Temp->Nlink);
		Temp=Temp->Nlink;
	}
}
NODE *merge(NODE **Temp2,NODE **T2,NODE **slow_p)
{
                        NODE *Temp1=*Temp2;
                        while((Temp1)->Nlink!=NULL)
                        {
                                printf("T2:::::::::::::::::%p\n",T2);
                                Temp1=(Temp1)->Nlink;
                        }
                        (Temp1)->Nlink=*slow_p;

                        (*slow_p)->Nlink=*T2;

return *Temp2;
}

NODE *Odd_Even_linked_list_Rev(NODE **Head)
{
	NODE *Temp=*Head,*Prev=NULL,*T2=NULL;
	
		NODE *slow_p=Temp,*fast_p=Temp;
        	while((fast_p->Nlink!=NULL)&&(fast_p->Nlink->Nlink!=NULL))
	        {
			 Prev=slow_p;
                	 slow_p=slow_p->Nlink;
                	 fast_p=fast_p->Nlink->Nlink;
                	
        		 printf("\nslow::%p\tfast::%p\tprev::%p",slow_p,fast_p,Prev);
  	  	}
		if(fast_p->Nlink==NULL)
		{
			printf("\nOdd linked list\n");
			Prev->Nlink=NULL;

                        Temp=ReverseLinked(&Temp);//first half
        		T2=ReverseLinked(&slow_p->Nlink);//second half
			printf("slow_p:::%p\n",slow_p);//middle
			Temp=merge(&Temp,&T2,&slow_p);
		}
		else
		{	
			printf("\nEven linked list\n");
			T2=slow_p->Nlink;
			slow_p->Nlink=NULL;	
                        Temp=ReverseLinked(&Temp);//first half
                 
			T2=ReverseLinked(&T2);//second half
		     	  NODE *temp1=Temp;
                        while(temp1->Nlink!=NULL)
                        {
    
                                temp1=temp1->Nlink;
                        }
			temp1->Nlink=T2;

		}
return Temp;

}

 
int main()
{
NODE *head=NULL;
		
	int Count_nodes=1,N_nodes=4,N_ele;
	int ch;

while(1)
{

	printf("\nenter 1.insert\t2.print\t3.REvrese for linked list\t4.find odd or even linked list\n");
	scanf("%d",&ch);
	fflush(stdout);


switch(ch)
{
case 1:
	printf("Enter number of nodes you want\n");
	scanf("%d",&N_nodes);
	while(N_nodes>=Count_nodes)
	{

		printf("Enter the %d node element\n",Count_nodes++);
		scanf("%d",&N_ele);
		//fflush(stdout);

		head=insertfront(&head,&N_ele);//insert elements
		//++Count_nodes;
	}
	break;

	//printing elements
case 2:
	printf("\nPrinting nodes data\n");
	Print_LL(&head);
	break;
case 3:
	printf("\n Reversed linked list\n");
	head=ReverseLinked(&head);
	break;
case 4:
	printf("\nfirst and second half linked list is reversed\n");
	head=Odd_Even_linked_list_Rev(&head);
	break;

default:
	printf("choose correct case\n");

}

}
return 0;

}







