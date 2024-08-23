//Example: Parking allocation for society
//==========================================================================================================
//Case 1: Number of flat in society. (int a[])
//Case 2:  allocate flat to owner (structure)
//Case 3: Check flat available or not 
//Case 4: Allocate parking for society (100- 150) 
//Case 5: allocate partaking to float owner 
//Case 6: check open parking 
//Case 7: search own by name or float no 
//Case 8: view all owner 
//Case 9: delete owner by flat no
//Case 10: update owner info by flat no
//Case 11: count same name owner 
//Case 12: count same birth date of owner 
//Case 13: count the age of owner by using birth date
//==========================================================================================================

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j,flats;

struct Owner
{
	int flatn;
	char owner[30];
	int parking;
};

struct Owner *own;




int main()
{
	
	int o;
	
	printf("Case 1: Number of flat in society.\nCase 2:  allocate flat to owner.\nCase 3: Check flat available or not.\nCase 4: Allocate parking for society.\nCase 5: allocate partaking to float owner.");
	do
	{
		printf("\n\nEnter yout choice : ");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				printf("Enter the number of flats in society : ");
				scanf("%d",&flats);
				
				own=(struct Owner*)malloc(sizeof(struct Owner)*flats);
				break;
				
			case 2:
				for(i=1;i<=flats;i++)
				{
					printf("\nEnter flat number : ");
					scanf("%d",&own[i].flatn);
					printf("Enter Owner name : ");
					scanf("%s",&own[i].owner);
					printf("Enter parking slot number : ");
					scanf("%d",&own[i].parking);
				}
				
				printf("\nDisplay all ditails of flat :\n");
				for(i=1;i<=flats;i++)
				{
					printf("\nFlat no: %d\nOwner : %s\nParking slot : %d\n",own[i].flatn,own[i].owner,own[i].parking);
				}
				break;
				
			case 3:
				
				break;
			
			case 4:
				break;
				
		}
	}while(o<=10);
}




