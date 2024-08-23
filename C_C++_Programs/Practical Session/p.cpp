#incluce<stdio.h>
#include<conio.h>
#include<string.h>



struct flats
{
	int flatno;
	int id;
	char name[30];
	char gmail[30];
	char mobile[30];
	
	struct flats *next;
};
struct flats *head=NULL;


totalFlats()
{
	if(head==NULL)
	{
	 	head=(struct flats*)malloc(sizeof(flats));
	 	printf("Enter flat number : ");
	 	scanf("%d",&head->flatno);
	 	head->next=NULL;
	}
	else
	{
		struct  flats *temp,*temp1;
	 	temp=head;
	 	
	 	temp1=(struct flats*) malloc(sizeof(flats));
	 	
		printf("\nEnter flat number : ");
	 	scanf("%d",&temp1->flatno);
	 	
		temp1->next=NULL;
	 	
		while(temp->next!=NULL)
		{
	 		temp=temp->next;
		}
		temp->next=temp1;
		 

	}
}




int main()
{
	int choice;
	
	printf("Case 1: Number of flat in society.\nCase 2:  allocate flat to owner.\nCase 3: Check flat available or not.\nCase 4: Allocate parking for society.\nCase 5: allocate partaking to float owner.");
	
	do
	{
		printf("Enter the choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				totalFlats();
				break;
				
			case 2:
				
				break;
				
			case 3:
				
				break;
				
			case 4:
				
				break;
				
			case 5:
				
				break;
				
			default : printf("You have entered wrong choice. Plese choose valide choice.");
		}
	}while(choice<=5);
}
