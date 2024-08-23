//Example: Array of a structure.

#include<stdio.h>

struct Product
{  int id;
   char name[90];
   float price;	
};
int main()
{
	int i;
	struct Product p[3];
	
	for(i=0; i<3; i++)
	{
		printf("\nEnter Name,ID and Price of product:\n"); 
    	scanf("%s %d %f",&p[i].name,&p[i].id,&p[i].price);
	}
	
	printf("\nDisplay all products:\n");
	for(i=0; i<3; i++)
	{
  		printf("\n%s\t%d\t%.2f",p[i].name,p[i].id,p[i].price);
	}
	return 0;
}

