//////////Practical Session- 05-09-2023 ///////////
//=========================================================================================================
//Q.1) Create a structure called library to hold accession number, title of the book, author name, price of
//		the book, and flag indicating whether book is issued or not. Write a menu-driven program that
//		implements the working of a library. The menu options should be:
//	1) Add book information.
//	2) Display information of book.
//	3) List of all books of given author.
//	4) List the title of specified book.
//	5) List the count of books in the library.
//	6) List the books in the order of accessionnum.
//	7) Exit.
//=========================================================================================================


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i,j,size,flag;

struct Library
{
	int accnum;
	char bookname[90];
	char authorname[90];
	float price;
};

struct Library *l;
	
void adBook()
{					
	l=(struct Library*)malloc(sizeof(struct Library)*size);
					
	for(i=1;i<=size;i++)
	{
		printf("\nEnter accecian number : ");
		scanf("%d",&l[i].accnum);
		printf("Enter book name : ");
		scanf("%s",&l[i].bookname);
		printf("Enter author name : ");
		scanf("%s",&l[i].authorname);
		printf("Enter price of book : ");
		scanf("%f",&l[i].price);
	}
}

void disInfo()
{
	printf("\n\nInformation of books :\n");
	for(i=1;i<=size;i++)
	{
		printf("\nANumber : %d\nBook Name : %s\nAuthor Name : %s\nBook Price : %.2f\n",l[i].accnum,l[i].bookname,l[i].authorname,l[i].price);
	}
}


void listOfAuthor()
{
	char autname[20];
	
	printf("\nEnter author name : ");
	scanf("%s",&autname);
	flag=1;			
	for(i=1;i<=size;i++)
	{
		if(strcmp(l[i].authorname,autname)==0)
		{
			printf("%s\n",l[i].bookname);
			flag=0;
		}
	}
	if(flag)
	{
		printf("\nNo match found.");
	}
}


void searchBook()
{
	int ac;
	printf("\nEnter accesion number : ");
	scanf("%d",&ac);
	flag=1;
	for(i=1;i<=size;i++)
	{
		if(ac==l[i].accnum)
		{
			printf("\n%s",l[i].bookname);
			flag=0;
		}
	}
	if(flag)
	{
		printf("\nNo match found.");
	}
}


void bookCount()
{
	int count=0;
	for(i=1;i<=size;i++)
    {
		count++;
    }
    printf("\nTotal Number of Books in Library are : %d\n",count);				
}


void sortBook()
{
	int temp;
	printf("\nBooks in the order of accesion number :\n");
	for(i=1;i<=size;i++)
	{
		for(j=i+1;j<=size;j++)
		{
			if(l[j].accnum<l[i].accnum)
			{
				struct Library temp=l[i];
				l[i]=l[j];
				l[j]=temp;
			}
		}
		printf("AN : %d\t%s\n",l[i].accnum,l[i].bookname);
	}
}


int main()
{	
	int o;
	char ch;
	
	printf("\n1) Add book information.");
	printf("\n2) Display information of book.");
	printf("\n3) List of all books of given author.");
	printf("\n4) List the title of specified book.");
	printf("\n5) List the count of books in the library.");
	printf("\n6) List the books in the order of accessionnum.");
	printf("\n7) Exit.");
	
	do
	{
		printf("\n\nEnter your choice : ");
		scanf("%d",&o);
	
		switch(o)
		{
			case 1:
					printf("\nHow many books you want to store : ");
					scanf("%d",&size);
	
					adBook();
					break;
			case 2:
					disInfo();
					break;
			case 3:
					listOfAuthor();
					break;
			case 4:
					searchBook();
					break;
			case 5:
					bookCount();
					break;
			case 6:
					sortBook();
					break;
			case 7:
					return 0;
			
			default : printf("\nYou have entered invalid choice !!");
		}
	}while(o<=7);
	
	return 0;
}

