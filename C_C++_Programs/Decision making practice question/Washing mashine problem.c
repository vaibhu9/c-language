#include<stdio.h>
int main()
{
	int weight;
	printf("Enter weight :\n");
	scanf("%d",&weight);
	
	if(weight>7000)
	{
		printf("\nOverload");
	}
	else if(weight>=1&&weight<=2000)
	{
		printf("\n25 minutes required");
	}
	else if(weight>=2001&&weight<=4000)
	{
		printf("\n35 minutes required");
	}
	else if(weight>=4001&&weight<=7000)
	{
		printf("\n45 minutes required");
	}
	else
	{
		printf("\nInvalid Input");
	}
	return 0;
}
