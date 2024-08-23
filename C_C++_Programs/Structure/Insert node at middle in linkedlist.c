#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};
struct Node *head=NULL;

void insert()
{
	
	if(head==NULL)
	{
		head=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data in node\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else if(head->next==NULL)
	{
		struct Node *temp;
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter data in new node\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		head->next=temp;
	}
	else
	{
		struct Node *temp1,*temp2,*newNode;
		int value;
		printf("\nEnter value where we want to insert new node\n");
		scanf("%d",&value);
		temp1=head;
		int flag=0;
		while(temp1!=NULL)
		{
		 	if(temp1->data==value)
			{
		 		temp2=temp1->next;
		 		flag=1;
		 		break;
			}
			temp1=temp1->next;
		}
		if(flag)
		{
		 	newNode=(struct Node*)malloc(sizeof(struct Node));
		 	printf("\nEnter data in new node\n");
		 	scanf("%d",&newNode->data);
		 	newNode->next=NULL;
		    temp1->next=newNode;
		    newNode->next=temp2;
	    }
	    else
		{
	     	printf("Node not found");
		}
	}
}


void display()
{
	struct Node *temp;
	temp=head;
	printf("\nData in Linkedlist : ");
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}


int choice;

int main()
{
	do
	{
		printf("\n1:INSERT AT MIDDLE\n");
		printf("2:View\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			default:
				printf("Wrong choice");
		}
		
	}while(choice!=3);
	
	return 0;
}


