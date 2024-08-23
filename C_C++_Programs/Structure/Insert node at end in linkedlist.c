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
		printf("Enter data in head of node : ");
		scanf("%d",&head->data);
		head->next=NULL;
	}
	else
	{
		struct Node *temp,*temp1;
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter data in temporary node : ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		temp1=head;
		
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
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
		printf("\n1:INSERT AT ENDING\n");
		printf("2:View\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			default:
				printf("\nWrong choice !!");
		}
		
	}while(choice!=3);
	
	return 0;
}

