#include<stdio.h>
#include<stdlib.h>
struct node *create();
void append();
void print();
void printd( );
void insertb();
void insertloc();
void insertend();
void aboutus();
void delb();
void delloc();
void dellocb();
void delend();
struct node{
	int info;
struct	node* next;
}; 
struct node*start=NULL;
int main()
{ 
int ch;
	
 
 	
 while(1)
 {
 	printf("\n\nenter the case you want\n\n");
	
	printf(" press 1 to number you want to insert in your node\n press 2 to show the node\n press 3 to STOP \n press 4  to insert the node at begining ");
	printf("\n press 5 to insert node  in any location \n press 6 to insert at last node\n press 7 to see about code developer\n ");
	printf("press 8 for deletion in singly-linked-list\n");
	scanf("%d",&ch);
	
 switch(ch)
{
 
case 1:	append(); //function call that append the node at last 
break;
case 2:	print();//function call  that prints your singly-linked-list   
break;
case 3: exit(0);//to stop the program
break;
case 4:insertb();//to insert at begining
break;
case 5:insertloc();//to insert at any location of existing singly-linked list
break;
case 6:insertend();//to insert at end of your existing singly-linked list
break;
case 7:aboutus();
break;
case 8:
int ch1;
	while(1)
	{
		printf("\nenter the the case you want\n");
		printf("\n press 1 enter for insert node \n,press 2 for print the singly linked list \n press 3 for delete node at begining\n");
		printf(" press 4 to delete after loc\n press 5 to delete before the loc\n press 6 for delete at end\n\n");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:append();
			break;
			case 2:printd();
			break;	
			case 3:delb();
			break;
			case 4:delloc();
			break;
			case 5:dellocb();
			break;
			case 6:delend();
			break;
			default :printf("\n invalid choice");
		}
	}//for deleting opreation
break;
default : printf("invalid choice");//if user not press a number given in the option

}
	
}
	

return 0 ;

}

struct node* create()//function to create a singly-linked list

{
	
	struct node*n1;
	n1=(struct node*)malloc(sizeof(struct node));
	return n1;
}
void append()//fuction to insert a a node after other node
{ 
	int i;
	
	
	struct node *temp,*temp1;
	temp=create();
	printf("\nenter the number\n\n\n");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(start==NULL)
	{
start=temp;
	}
	else
	{
	temp1=start;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	
		temp1->next=temp;
}


}
void print()
{
	struct node* t;
	
	if(start==NULL)//in case user doesnot insert any node and want to see a singly linked list
	{
		printf("list is empty");
		
	}
	else
	{
	t=start;
	while(t!=NULL)
	{
		printf("->%d",t->info);
	
		t=t->next;
	}
		printf("\n\n");
}
}
void insertb()
{
	struct node *temp;
	if(start== NULL)//in case user doesnot insert any node and want to see a singly linked list

	{  
	   printf("\n to insert at begining please insert atleast one node first\n");
		exit(0);
		
	}
	else
	{
	
	temp=create();
	printf("insert the data in the node\n");
	scanf("%d",&temp->info);
	temp->next=start;
	start=temp;
}
}
void insertloc()
{
	struct node* temp,*temp1;
	int loc,i;
	temp=create();
	if(start==NULL)//in case user doesnot insert any node and want to see a singly linked list

	{
		printf("linked list is empty");
	}
	else
	{
	
	printf("\nenter the location where");
	scanf("%d",&loc);
	
	
		temp1=start;
		
		for(i=1;i<=loc-2;i++)
		{
	temp1=temp1->next;
	if(temp1==NULL)
	{
		exit(0);
	}
         	}
         	printf("\nenter the data you want in list\n");
         	scanf("%d",&temp->info);
	
	temp->next=temp1->next;
temp1->next=temp;
}}
void insertend()
{
	struct node* temp; 
	struct node* temp1;
	if(start==NULL) //in case user doesnot insert any node and want to see a singly linked list

	{
		
		printf("\nTo insert at last please insert atleast one node first\n");
		main( );
		
	}

		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp1=create();
		printf("enter the data you want\n");
		scanf("%d",&temp1->info);
	
	temp1->next=NULL;
	temp->next=temp1;
		
}
void aboutus()
{
	printf("\n\n my name is Rahul Kumar\n");
	printf("\n University name -: JAYPEE UNIVERSITY OF ENGINEERING AND TECNOLOGY GUNA (M.P)\n");
	printf("\n email id -: rahul.yadav.09839@gmail.com");
	
	
	
}



	
void printd()
{
	struct node* t;
	
	if(start==NULL)
	{
		printf("list is empty\n");
		
	}
	else
	{
	t=start;
	while(t!=NULL)
	{
		printf("->%d",t->info);
	
		t=t->next;
	}
		printf("\n\n");
}}
void delb()
{int loc;
	struct node* temp;
	if(start==NULL)
	{
		printf("list is already empty\n");
		
	}
	else
	temp=start;
	start=temp->next;
	free(temp);
}

void delloc()
{
	int loc;
	struct node* temp,*temp1;

	temp=start; 
	printf("enter the locaation you want to delete\n");//asking for a location;
	scanf("%d",&loc);
	int i;
for( i=1;i<loc-1;i++)
{
	temp=temp->next;
	}	
	if(temp==NULL)
	{
		printf("empty list\n");
		exit(0);
	}

	temp1=temp->next;
	temp->next=temp1->next;	
	free(temp1);
	}
void dellocb()
	{
		
			int loc;
	struct node* temp,*temp1;
int i;
	temp=start; 
	printf("enter the locaation you want to del\n");//asking for a location;
	scanf("%d",&loc);
for(i=1;i<loc-2;i++)
{
	temp=temp->next;
		
	if(temp==NULL)
	{
		printf("empty list\n");
		exit(0);
	}}

	temp1=temp->next;
	temp->next=temp1->next;	
	
	free(temp1);
	}
	void delend()
	{
		struct node*temp,*temp1;
		temp1=start;
		if(temp1==NULL)
		{
			printf("empty linked-list\n");
			exit(0);
		}
		while (temp1->next!=NULL)
		{
		
		
		temp=temp1;
		temp1=temp->next;
		}
	
		temp->next=NULL;
		
		free(temp1);
	}
	












































































































































