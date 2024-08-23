#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int size,i,fn,flag;
struct flatownerpark{
	
	int fno;
	char owner[90];
	int mono;
	char gmail[111];
	int park;
	int opark;
	int spark;
	int id;

};

struct flatownerpark *f;

void noflatsociety()
{
	printf("\nNuber of flat in society");
	scanf("%d",&size);

	f=(struct flatownerpark*)malloc(sizeof (struct flatownerpark)*size);
	
	for(i=0;i<size;i++)
		{
			printf("\nEnter the flat no");
			scanf("%d",&f[i].fno);
			
		}

}

void alloflatowner()
{
	printf("\nAllocate Flat to owner");
		printf("\nenter the flat no");
		scanf("%d",&fn);
	flag=1;
	for(i=0;i<size;i++)
	{
		if(fn==f[i].fno)
		{
			if(f[i].id==0)
			{
			
			printf("Enter the Id Number of Ownwer");
			scanf("%d",&f[i].id);
		//	printf("\nEnter the owner name");
			//scanf("%s",&f[i].owner);
			printf("Enter owner mo no.");
			scanf("%d",&f[i].mono);
			printf("\nEnter the Gmail of owner");
			scanf("%s",&f[i].gmail);
			}
			else
			{
				printf("This Flat is Allready Booked");
			}
		flag=0;
		}
	
	}
	if(flag)
	{
		printf("\n Please Valid Flat Number");
	}
		
		
	
}

void checkflat()
{
	
	printf("Enter the flat number");
	scanf("%d",&fn);
	
	
	
}
void alloparksoci()
{
	printf("Enter the total parking slot");
	scanf("%d",&f[i].park);
	
	printf("enter the open parking slot");
	scanf("%d",&f[i].opark);
		
	
	
}
int main()
{
	int choice;
	
	printf("\n1:Number of flat in society");
	printf("\n2:allocate flat to owner");
	printf("\n3:Check flat available or not"); 
	printf("\n4:Allocate parking for society");  
    printf("\n5:allocate partaking to float owner"); 
    printf("\n6:check open parking ");
    printf("\n7:search own by name or float no"); 
    printf("\n8:view all owner");
    printf("\n9:delete owner by flat no");
    printf("\n10:update owner info by flat no");
    printf("\n11:count same name owner");
    printf("\n12:count same birth date of owner"); 
    printf("\n13:count the age of owner by using birth date");
	
	
	do{
		printf("\nEnter the Choice");
		scanf("%d",&choice);
		
		
		
		switch(choice)
		{
			case 1:
				noflatsociety();
				break;
				
			case 2:
				
				alloflatowner();
				 break;
				 
			case 3:
				printf("\ncheck Flat available or not");
				checkflat();
				break;
				
			case 4:
				printf("\nAllocate Parking for Society");
				alloparksoci();
				break;
				
			case 5:
				printf("\nallocate partaking to float owner");
				
				
				break;
				
			case 6:
				 printf("\ncheck open parking ");
				
				break;
				
			case 7:
				printf("\nsearch own by name or float no"); 
				
				break;
				
			case 8:
				printf("\nview all owner");
				
				break;
				
			case 9:
				printf("\ndelete owner by flat no");
				
				break;
				
			case 10:
			 	printf("\nupdate owner info by flat no");
			 	
				break;
				
			case 11:
				 printf("\n11:count same name owner");
				
				break;
				
			case 12:
				 printf("\n12:count same birth date of owner"); 
				break;
				
			case 13:
			  printf("\n13:count the age of owner by using birth date");
			  
			  break;
			  
			default:
				
				printf("No data found");
	
				
		}
	}
	while(choice<13);
	
	return 0;
}
