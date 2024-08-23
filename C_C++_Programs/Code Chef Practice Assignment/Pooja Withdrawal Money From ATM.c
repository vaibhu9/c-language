#include<stdio.h>
int main()
{   int x;
	float y;
	printf("Enter the account balance :\n");
	scanf("%f",&y);
	printf("Enter the amount to withdrawal :\n");
	scanf("%f",&x);
	
	if(x%5!=0)
	{
		printf("Incorrect Withdrawal Amount (not multiple by 5)");
	}
	else if(0<=y<=2000&&x<y)
	{
		printf("Now account balance is : %.2f",((y-x)-0.50));
	}
	else
	{
		printf("Insufficiant Funds");
	}
	return 0;
}
