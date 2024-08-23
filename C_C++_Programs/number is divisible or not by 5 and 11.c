#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the number :\n");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("\nThe number is divisible by 5");
	}
	else if(a%11==0)
	{
		printf("\nThe number is divisible by 11");
	}
	else
	{
		printf("\nThe number id not divisible by 5 and 11");
	}
	return 0;
}
