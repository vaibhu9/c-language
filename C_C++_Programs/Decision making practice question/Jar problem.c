#include<stdio.h>
int main()
{
	int N=10,k,r;
	
	printf("Enter the number of candies want to customer buy :\n");
	scanf("%d",&k);
	
	
	if (k<=5&&k>0)
	{
		r=N-k; 
		printf("\nNumber of candies sold : %d\nNumber of candies avilable in JAR : %d",k,r);
	}
	else
	{	
		printf("\nInvalid Input\nNumber of candies available in JAR : %d",N);
	}
	return 0;
}
