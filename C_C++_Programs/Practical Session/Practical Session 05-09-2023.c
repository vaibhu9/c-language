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

int i,j;

struct Library
{
	int accnum,flag;
	char bookname[90];
	char authorname[90];
	float price;
};

int main()
{	
	int o,size,count,temp,ac;
	char ch,autname[20];
	struct Library l[5];
	
	printf("\n1) Add book information.");
	printf("\n2) Display information of book.");
	printf("\n3) List of all books of given author.");
	printf("\n4) List the title of specified book.");
	printf("\n5) List the count of books in the library.");
	printf("\n6) List the books in the order of accessionnum.");
	
	do
	{
	
		printf("\n\nEnter your choice : ");
		scanf("%d",&o);
	
		switch(o)
		{
			case 1:
					printf("\nHow many books you want to store : ");
					scanf("%d",&size);
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
					break;
			case 2:
					printf("\n\nInformation of books :\n");
					for(i=1;i<=size;i++)
					{
						printf("\nANumber : %d\nBook Name : %s\nAuthor Name : %s\nBook Price : %.2f\n",l[i].accnum,l[i].bookname,l[i].authorname,l[i].price);
					}
					break;
			case 3:
					printf("\nEnter author name : ");
					scanf("%s",&autname);
				
					for(i=1;i<=size;i++)
					{
						if(strcmp(l[i].authorname,autname)==0)
						{
							printf("%s\n",l[i].bookname);
						}
					}
					break;
			case 4:
					printf("\nEnter accesion number : ");
					scanf("%d",&ac);
					
					for(i=1;i<=size;i++)
					{
						if(ac==l[i].accnum)
						{
							printf("\n%d\n%s\n%s\n%.2f",l[i].accnum,l[i].authorname,l[i].bookname,l[i].price);
						}
					}
					break;
			case 5:
					for(i=1;i<=size;i++)
    	            {
	                    count++;
            	    }
        	        printf("\nTotal Number of Books in Library are : %d\n",count);
					break;
			case 6:
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
					break;
			case 7:
					return 0;
			
			default : printf("\nYou have entered invalid choice !!");
		}
	}while(o<=7);
	
	return 0;
}


