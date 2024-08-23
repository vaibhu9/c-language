#include<stdio.h>
#include<conio.h>
int main()
{
	int cp,sp,p,l;
	printf("Enter the cost price and selling price of the product :\n");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("\nProfit is : %d",p);
	}
	else
	{
		l=cp-sp;
		printf("\nLoss is : %d",l);
	}
	return 0;
}
