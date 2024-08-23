#include<stdio.h>
#include<stdlib.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
//1. Customer Menu
///////////////////////////////////////////////////////////////////////////////////////////////
void customer()
{
	
}

void searchcid()
{
	
}

void searchcname()
{
	
}

void custsearch()
{
	char ch1;
	
	printf("\nEnter search method: ");
	scanf("%c",&ch1);
	switch(ch1)
	{
		case 'i':
				searchcid();
			break;
			
		case 'n':
				searchcname();
			break;
			
		default : printf("\nSORRY !!!\nYou have entered incorrect method.");
	}
}

void custentry()
{
	printf("Entry succesfull.");
}

void custlist()
{
	
}

void custupdate()
{
	
}

void customerInfo()
{
	char ch1;
	
	do
	{
		printf("\nEnter what you want to do: ");
		scanf("%s",&ch1);
	
		switch(ch1)
		{
			case 'c':	
					customer();
				break;
			
			case 's':
					custsearch();
				break;
			
			case 'e':
					custentry();
				break;
			
			case 'l':
					custlist();
				break;
			
			case 'u':
					custupdate();
				break;
				
			case 'q':
					void Exit();
				break;
			
			default : printf("\nSORRY !!!\nYou have entered incorrect choice.");
		}
	}while(ch1!='q');
}
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//2. Medicine menu
//////////////////////////////////////////////////////////////////////////////////////////

void medicine()
{
	
}

void updatestock()
{
	
}

void medientry()
{
	
}

void medisale()
{
	
}

void medisearch()
{
	
}

void stock()
{
	
}

void Medicine()
{
	char ch;
	
	printf("\nEnter what are want to do: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'm':
				medicine();
			break;
			
		case 'u':
				updatestock();
			break;
			
		case 'e':
				medientry();
			break;
			
		case 's':
				medisale();
			break;
			
		case 'f':
				medisearch();
			break;
			
		case 'l':
				stock();
			break;
			
		default : printf("\nSORRY !!!\nYou have entered incorrect choise.");
	}
}
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
//3. Supplier menu
///////////////////////////////////////////////////////////////////////////////////////////
void supplier()
{
	
}

void suppentry()
{
	
}

void supplist()
{
	
}

void suppupdate()
{
	
}

void searchid()
{
	
}

void searchname()
{
	
}

void search()
{
	char ch;
	
	printf("\nEnter search method: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'i':
				searchid();
			break;
			
		case 'n':
				searchname();
			break;
			
		default : printf("\nSORRY !!!\nYou have entered incorrect method.");
	}
}


void supplierInfo()
{
	char ch;
	
	printf("\nEnter what you want to do: ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'f':
				supplier();
			break;
			
		case 'e':
				suppentry();
			break;
			
		case 'l':
				supplist();
			break;
			
		case 'u':
				suppupdate();
			break;
			
		case 's':
				search();
			break;
			
		default : printf("\nSORRY!!!\nYou have entered incorrect choice.");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
//4. Bill slip
/////////////////////////////////////////////////////////////////////////////////////////////////
void Billing()
{
	
}









////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//5. About menu
////////////////////////////////////////////////////////////////////////////////////////////////
void About()
{
	
}





////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
//6. Exit
////////////////////////////////////////////////////////////////////////////////////////////////
void Exit()
{
	
}

////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	int ch;
	printf("Enter your choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
				customerInfo();	
			break;
			
		case 2:
				Medicine();
			break;
			 
		case 3:
				supplierInfo();
			break;
			
		case 4:
				Billing();
			break;
			
		case 5:
				About();
			break;
		
		case 6:
				Exit();
					
		default : printf("\nSORRY !!!\nYou have entered an incorrect choice.");
	}
}




