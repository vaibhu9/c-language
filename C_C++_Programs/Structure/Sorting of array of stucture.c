//Example: WAP to arrange all products in descending order by using price.

#include<stdio.h>

struct Product
{  
	int id;
	char name[90];
	float price;	
};

int main()
{
	int i,j;
	struct Product p[3];
	for(i=0; i<3; i++) 
	{
   	 	printf("\nEnter name id and price of product\n"); 
    	scanf("%s %d %f",&p[i].name,&p[i].id,&p[i].price);
	}
  //sorting logics 
	for(i=0; i<3;i++)
	{
  		for(j=(i+1);j<3; j++)
		{
  	 		if(p[i].price<p[j].price)
			{
				struct Product temp=p[i];
				p[i]=p[j];
				p[j]=temp;	
			} 	
    	}
	}
	printf("\nDisplay all products :\n");
	for(i=0; i<3; i++)
	{
		printf("\n%s\t%d\t%.2f",p[i].name,p[i].id,p[i].price);
	}
	return 0;
}

