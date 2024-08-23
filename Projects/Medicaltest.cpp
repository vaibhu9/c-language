
/////////////////Trial///////////////
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

//========   Structure Declaration   =========================================================================

struct supplier
{
	int supp_id;
	char supp_name[15];
	char supp_mob_no[10];
	char supp_city[15];
	char supp_email[20];
};
struct supplier s;





//========   Fuction Declaration   ============================================================================

int getsupp_id();

void main_menu();
//---------------- Fuctions of customer ------------------------------------------------------------
//void customer();

//----------------- Fuctions of medicine -------------------------------------------------------
//void medicine();

//------------------ Fuctions of supplier -----------------------------------------------------------------
void supplier();

void supp_entry();
void supp_list();
void supp_update();
void search();
void search_id();
void search_name();
//-----------------------------------------------------------------------------------
//void bill();

//-------------------------------------------------------------------------------------
//void about();

//--------------------------------------------------------------------------------------

///////////////////////auto get supplier id and increment is////////////////////
/*
int getsupp_id()
{
	FILE *fptr;
	
	fptr=fopen("supplier.txt","r");
	
	if(fptr==NULL)
	{
		printf("\nData not found.....");
		getch();
	}
	else
	{
		s.supp_id=500;
		rewind(fptr);
		
		while(fscanf(fptr,"%d %s %s %s %s",&s.supp_id,s.supp_name,s.supp_city,s.supp_mob_no,s.supp_email)!=EOF)
		{
			
		}
	}
	fclose(fptr);
	
	return s.supp_id+1;

}
*/
//--------------------------------------------------------------------------------------------------

int main()
{
	char name[15];
	char pass[15];
	
	int i,count=0;
	
	main_menu();
}

void main_menu()
{
	char ch;
	
	do
	{
		printf("\nCustomer Information\n");
		printf("\nMedicine Information\n");
		printf("\nSupplier Information\n");
		printf("\nBilling\n");
		printf("\nAbout\n");
		printf("\nExit\n");
		
		printf("\n\n\n\t\t\t**WELCOME TO NAITIK MEDICAL STORE**\n\n\n");
		printf("\n\n\nPress First Character For Further Menu :  ");
		
		ch=toupper(getche());
		
		switch(ch)
		{
			case 'C':
//						customer();
				
				break;
			
			case 'M':
//						medicine();
				
				break;
				
			case 'S':
						supplier();
				
				break;
				
			case 'B':
//						bill();
				
				break;
				
			case 'A':
//						about();
				
				break;
				
			case 'E':
						printf("\n\nDo you want to exit now ? Y/N :");
						
						ch=(getch());
						ch=toupper(ch);
						
						if(ch=='Y')
						{
							exit(0);
						}
						else
						{
							main_menu();
						}
				
			default : printf("\n\nPlease enter right character [C,M,S,B,A].\n\n");
			
			getch();
		}
	}while(ch!='E');
}


//================================================================================================================
//======Supplier menu================
//================================================================================================================

void supplier()
{
	char ch;
	
	do
	{
		printf("\n\n\n\t\t**Supplier Menu :**");
		printf("\n\n\t\t1)Entry of supplier.\n\t\t2)List of supplier.\n\t\t3)Update supplier.\n\t\t4)Search supplier.\n\t\t5)Main Menu.");
		
		printf("\n\t\rPress first character of further operation : ");
		ch=toupper(getche());
		
		switch(ch)
		{
			case 'E':
						supp_entry();
				break;
				
			case 'L':	
//						supp_list();
				break;
				
			case 'U':
//						supp_update();
				break;
				
			case 'S':
//						search();
				break;
				
			case 'M':
//						main_menu();
				break;
				
			default : printf("\nPlease enter valid character only (E,L,U,S,M)");
		}
	}while(ch!='M');
}


//===========Supplier definations===================================================

void supp_entry()
{
	int id;
	char ch;
	
	FILE *fptr;
	
	fptr=fopen("supplier.txt","a");
	
	if(fptr==NULL)
	{
		printf("\nCan not open file !!!");
		
		exit(0);
	}
	
	
	ch='Y';
	
	while(ch=='Y')
	{
		printf("\n\nSUPPLIER ENTRY");
		
//		s.supp_id=getsupp_id();
		printf("\nSUPPLIER ID : ");
		scanf("%d",&s.supp_id);
		
		printf("\nSUPPLIER NAME : ");
		_flushall();
		gets(s.supp_name);
		
		printf("\nSUPPLIER CITY : ");
		gets(s.supp_city);
		
		printf("\nMOBILE NUMBER : ");
		gets(s.supp_mob_no);
		
		printf("\nEMAIL ID : ");
		gets(s.supp_email);
		
		fprintf(fptr,"ID : %d\tName : %s\tCity : %s\tMobile : %s\tEmail : %s\n\n\n",s.supp_id,s.supp_name,s.supp_city,s.supp_mob_no,s.supp_email);
		
		printf("\nSUPPLIER DATA SUCCESSFULLY ADDED !!!!!");
		
		printf("\nDo you want to add more supplier : Y/N");
		ch=toupper(getche());
	}
	fclose(fptr);
}



void search()
{
	int ch;
	
	do
	{
		printf("\nTwo options are available for serching :\n1)ID number of supplier\n2)Name of Supplier");
	
		printf("\n\nPress first character for further operation : ");
		
		ch=toupper(getche());
		
		switch(ch)
		{
			case 'I':
//						search_id();
				break;
				
			case 'N':
//						search_name();
				break;
				
			case 'S':
						supplier();
				break;
				
			default : printf("\nPlease enter valid character only (I,N,S)");
		}
	}while(ch!='S');
}




