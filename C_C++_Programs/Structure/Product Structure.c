//Example: WAP to create structure name as Product with field id,name and price and input data from a keyboard and display it.

#include<stdio.h>
struct Product
{
	int id;
	char name[90];
	float price;
};
int main()
{
   struct Product p;
   printf("\nEnter Name ID and Price of product :\n");
   gets(p.name);
   scanf("%d %f",&p.id,&p.price);
   printf("\nName is %s\n",p.name);
   printf("Id is %d\n",p.id);
   printf("Price is %.2f\n",p.price);
	return 0;
}

