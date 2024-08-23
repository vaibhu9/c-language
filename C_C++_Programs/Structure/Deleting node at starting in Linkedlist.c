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
		head=(struct Node*)malloc(sizeof(Node));
		printf("\nEnter data in node\n");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else if(head->next==NULL)
	{
		struct Node *temp;
		temp=(struct Node*)malloc(sizeof(Node));
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
		 	newNode=(struct Node*)malloc(sizeof(Node));
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


void del()
{
	struct Node *temp;
	if(head==NULL)
	{
		printf("LinkedList is empty");
	}
	else
	{
		temp=head;
		head=head->next;
		temp->next=NULL;
		int value=temp->data;
		free(temp);
	    temp=NULL;
		printf("delete node is %d\n",value);
   }
}


void display()
{
	struct Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}


int choice;

int main()
{
	do
	{
		printf("\n1:INSERT NODE AT MIDDLE :\n");
		printf("\n2:View\n");
		printf("\n3:Delete Node from Begining\n");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				del();
				break;
			default:
				printf("Wrong choice");
		}
	}while(choice!=4);
	return 0;
}


