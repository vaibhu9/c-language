#include"library.h"
#include<stdlib.h>
int size;
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
