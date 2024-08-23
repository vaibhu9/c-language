#include<stdio.h>
#include<stdlib.h>

struct Product
{  
	int id;
	char name[90];
	float price;	
};

int main()
{
	int i,size;
	struct Product *p;
	
	printf("\nEnter product count : ");
	scanf("%d",&size); //3 
   
	p=(struct Product*)malloc(sizeof(struct Product)*size);
   
	for(i=0; i<size; i++)
	{
		printf("\nEnter product Name, ID and Price :\n");
		scanf("%s %d %f",&p[i].name,&p[i].id,&p[i].price);
	}
   
	printf("\nDisplay all products :\n");
	for(i=0; i<size;i++)
	{
		printf("\n%s\t%d\t%.2f",p[i].name,p[i].id,p[i].price);
	}
	return 0;
}

