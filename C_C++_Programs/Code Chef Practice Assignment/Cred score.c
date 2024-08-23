#include<stdio.h>
int main()
{
	int x;
	printf("Enter the credit score :\n");
	scanf("%d",&x);
	if(x>=750&&x<=1000)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
	return 0;
}
