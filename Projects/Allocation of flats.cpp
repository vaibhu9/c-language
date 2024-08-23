#include<stdio.h>
#include<stdlib.h>
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

//Logic to creat new flat///////////////////////////////////
totalFlats()
{
	int n=1,tflats;
	printf("Enter total numbers of flats : ");
	scanf("%d",&tflats);
	
	while(n<=tflats)
	{
		n++;
		if(head==NULL)
		{
		 	head=(struct flats*)malloc(sizeof(flats));
	 		printf("\nEnter flat number : ");
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
}


//fuction for allocat flat to owner//////////////////////////
alloFlat()
{
	struct flats *temp;
	int f,flag=1;
	temp=head;
//search logic to check flat is available or not.
	while(temp!=NULL)
	{
		if(temp->id==0)
		{
			flag=0;
		}
		temp=temp->next;
	}
	if(flag)
	{
		printf("\nFlat is not available. All flats are booked.");
	}
	else
	{
//Logic to allocate flat//////////////////////////////////
		temp=head;
		printf("\n\nWhich flat is have to allocate : ");
		scanf("%d",&f);
		while(temp->flatno!=f)
		{
			if(temp->next==NULL)
			{
				break;
			}
			temp=temp->next;
		}
	
		if(temp->flatno==f)
		{
		
			if(temp->id==0)
			{
				printf("\nEnter id\tname\tgamil\tmobile\n");
				scanf("%d %s %s %s",&temp->id,&temp->name,&temp->gmail,&temp->mobile);
			}
			else
			{
				printf("\n%d This flat is already booked.",f);
			}
		}
		else
		{
			printf("\nPlease enter valid flat number.");
		}
	}
}

//function to check flat is available or not.
checkAvailable()
{
	struct flats *temp;
	int f,flag=1;
	temp=head;
	//search logic to where is flat available
	printf("\nList of flat number which is available  :");
	while(temp!=NULL)
	{
		if(temp->id==0)
		{
			printf("\nFlat no : %d",temp->flatno);
			flag=0;
		}
		temp=temp->next;
	}
/*	if(temp->id==0)
	{
		printf("\nFlat no : %d",temp->flatno);
		flag=0;
	}
*/	if(flag)
	{
		printf("\nFlat is not available. All flats are booked.");
	}
}

//fuction for search owenr details by owner name

checkOwnerN()
{
	struct  flats *temp;
	int flag=1;
	char oname[30];
	temp=head;
	printf("\nEnter name of owner to search details : ");
	scanf("%s",&oname);
	
	while(temp!=NULL)
	{
		if(strcmp(temp->name,oname)==0)
		{
			printf("\nFlat number : %d\nID is : %d\nName is : %s\nMail ID : %s\nMobile : %s\n",temp->flatno,temp->id,temp->name,temp->gmail,temp->mobile);
			flag=0;
		}
		temp=temp->next;
	}
/*	if(temp->next==NULL)
	{
		if(strcmp(temp->name,oname)==0)
		{
			printf("\nFlat number : %d\nID is : %d\nName is : %s\nMail ID : %s\nMobile : %s\n",temp->flatno,temp->id,temp->name,temp->gmail,temp->mobile);
			flag=0;
		}
	}
*/	if(flag)
	{
		printf("\nGiven owner name is not present in data, please check name is correct or not.\nThank You");
	}
}



checkOwnerF()
{
	struct  flats *temp;
	int f,flag=1;
	temp=head;
	printf("\nEnter flat number to search owner's details : ");
	scanf("%d",&f);
	
	while(temp!=NULL)
	{
		if(temp->flatno==f)
		{
			printf("\nID is : %d\nName is : %s\nMail ID : %s\nMobile : %s\n\n",temp->id,temp->name,temp->gmail,temp->mobile);
			flag=0;
			break;
		}
		temp=temp->next;
	}
/*	if(temp->next==NULL)
	{
		if(temp->flatno==f)
		{
			printf("\nID is : %d\nName is : %s\nMail ID : %s\nMobile : %s\n\n",temp->id,temp->name,temp->gmail,temp->mobile);
			flag=0;
		}
	}
*/	if(flag)
	{
		printf("\nPlease enter valid flat number.");
	}
}



viewOwner()
{
	struct flats *temp;
	int n=1;
	temp=head;
	while(temp!=NULL)
	{
		printf("\n%d) %s",n++,temp->name);
		temp=temp->next;
	}
}


//Fuction for delete Owner by flat number.
void deletOwnerF()
{
	struct flats *temp,*temp1,*temp2;
	int fn,flag=1;
	
	temp2=NULL;
	temp=head->next;
	temp1=head;
	
	printf("\nEnter flat number to delete owner details.");
	scanf("%d",&fn);
	while(temp!=NULL)
	{
		
		if(head->flatno==fn)
		{
			
			flag=0;
			if(head->id!=0)
			{
				//Logic to delete owner details at starting.
				/////////////////////////////
				temp=head;
				head=temp->next;
				free(temp);
				temp=NULL;
				temp=(struct flats*) malloc(sizeof(flats));
				temp->flatno=fn;
				temp->id=0;
				strcpy(temp->name,"");
				temp->next=head;
				head=temp;
				printf("\nOWner details of flat number %d are deleted.",fn);
				/////////////////////////////
				break;
			}
			else
			{
				printf("\nThis flat is already empty.");
				break;
			}
		}
		else if(temp->flatno==fn)
		{
			flag=0;
			if(temp->id!=0)
			{
				//Logic to delete owner details at middle.
				/////////////////////////////
				temp2=temp->next;
				temp1->next=NULL;
				free(temp);
				temp=NULL;
				temp=(struct flats*) malloc(sizeof(flats));
				temp->flatno=fn;
				temp->id=0;
				strcpy(temp->name,"");
				temp->next=temp2;
				temp1->next=temp;
				printf("\nOWner details of flat number %d are deleted.",fn);
				/////////////////////////////
				break;
			}
			else
			{
				printf("\nThis flat is already empty.");
				break;
			}
		}
		
		temp1=temp;
		temp=temp->next;
	}
	if(flag)
	{
		printf("\nPlease enter valid flat number.");
	}
}





int main()
{
	int choice;
	
	printf("Case 1: Creat flat.\nCase 2: Allocate flat to owner.\nCase 3: Check flat available or not.\nCase 4: Search owner by flat no.\nCase 5: Search owner by name.\nCase 6: View all owner.\nCase 7: Delete Owner by flat number.\n");
	
	do 
	{
		printf("\n\nEnter the choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				totalFlats();
				break;
				
			case 2:
				alloFlat();
				break;
				
			case 3:
				checkAvailable();
				break;
				
			case 4:
				checkOwnerF();
				break;
				
			case 5:
				checkOwnerN();
				break;
				
			case 6:
				viewOwner();
				break;
				
			case 7:
				deletOwnerF();
				break;
				
			default : printf("You have entered wrong choice. Plese choose valide choice.");
		}
	}while(choice<=11);
}

