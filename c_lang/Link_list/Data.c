#include<stdio.h>
#include<stdlib.h>
typedef struct node
  {
	int data;
	struct node *Nlink;
	struct node *N_Nlink;
  }NODE;
NODE *Head=NULL;
		
/*
void inserfront(int N_ele)
{
//create node
	NODE *New=(NODE *)malloc(sizeof(NODE));
	New->data=N_ele;
	New->Nlink=NULL;
	New->N_Nlink=NULL;
	if(Head==NULL)
	{
		Head=New;
	}
	else
	{
		NODE *Temp=Head;
		New->Nlink=Temp;
		New->N_Nlink=Temp->Nlink;
		Head=New;
	}

	return 0;
}*/

void insertend(int N_ele)
{
	NODE *New=(NODE *)malloc(sizeof(NODE));
	New->data=N_ele;
	New->Nlink=NULL;
	New->N_Nlink=NULL;
	if(Head==NULL)
	{
		Head=New;
	}
	else
	{
		NODE *Temp=Head,*Prev=Temp;
		while(Temp->Nlink!=NULL)
		{
		Prev=Temp;

		Temp=Temp->Nlink;
		}
		Temp->Nlink=New;
		Prev->N_Nlink=Temp->Nlink;
	}
}
//display function

void Print_LL()
{
	NODE *Temp=Head;
	while(Temp!=NULL)
	{
		printf("data:%d\tOwn address:%p\tNext_link address:%p\tNext_Next_link:%p\n",Temp->data,Temp,Temp->Nlink ,Temp->N_Nlink);
		Temp=Temp->Nlink;
	}
}

//delete function
void delete_node()
{
int Ptr,c=1;
NODE *Temp=Head,*Prev=NULL,*P_Prev;

printf("\nenter delete element\n");
scanf("%d",&Ptr);

	if(Temp->data==Ptr)//delete first node
 	 {
		Head=Temp->Nlink;
   		free(Temp);
 	 }
	else
	{
			while(Temp->data!=Ptr&&Temp->Nlink!=NULL)
			{		                                         	
			P_Prev=Prev;
			Prev=Temp;			
			Temp=Temp->Nlink;
			c++;
		        }
			if(Temp->Nlink==NULL)
			{
			printf("their is no that argument\n");
			
			}
		if(c!=2)
		{
		P_Prev->N_Nlink=Temp->Nlink;
		}
		Prev->Nlink=Temp->Nlink;
		Prev->N_Nlink=Temp->N_Nlink;
		free(Temp);
	
	}	
	

}

 
//swapping of consecutive node
  
void swap_nodes()
{

int ele,count=0;
printf("enter swap node ele\n");
scanf("%d",&ele);

 
    
    NODE *Prev=NULL,*Temp=Head,*TT=NULL,*T_Temp=NULL;

	if(Head->Nlink == NULL) 
	{
	printf(" single node in the list so we can't swap\n");	
	return ;
 	}
	    Prev = Temp; 
		if(Head->data==ele)
		{
				Temp=Temp->Nlink;
				Head=Temp;
				T_Temp=Temp->Nlink;
				Temp->Nlink=Prev;
				
				TT=Temp->N_Nlink;
				Temp->N_Nlink=T_Temp;
				
				Prev->Nlink=T_Temp;
				Prev->N_Nlink=TT;
				
		}
		else
		{
			Temp=Head->Nlink;
			T_Temp = Temp->Nlink;
		    while(Temp->N_Nlink!=NULL)
		     {
			if(Temp->data=ele)
			{
				break;
			}
			else
			{
				Prev=Temp;
				Temp=T_Temp;
		
				T_Temp=T_Temp->Nlink;
			}
		      }
			Prev->Nlink = T_Temp;
			Prev->N_Nlink=Temp;

			Temp->Nlink=T_Temp->Nlink;
			T_Temp->Nlink=Temp;

			Temp->N_Nlink=T_Temp->N_Nlink;
			T_Temp->N_Nlink=Temp->Nlink;
			
		}
		
	
           
 	
   return ;  
 }  



int main()
{

	int Count_nodes=1,N_nodes=4,N_ele;
	int ch;

while(1)
{

	printf("\nenter 1.insert\t2.print\t3.Delete\t4.swap two consective nodes\n");
	scanf("%d",&ch);
	fflush(stdout);


switch(ch)
{
case 1:
	printf("Enter number of nodes you want\n");
	scanf("%d",&N_nodes);
	while(N_nodes>=Count_nodes)
	{

		printf("Enter the %d node element\n",Count_nodes);
		scanf("%d",&N_ele);
		//fflush(stdout);

		insertend(N_ele);//insert elements
		Count_nodes++;
	}
	break;

	//printing elements
case 2:
	Print_LL();
	break;


	//delete node
case 3:
	delete_node();
	break;




	//consecutive swapping
case 4:
	swap_nodes();
	break;

default:
	printf("choose correct case\n");

}

}
return 0;

}







