#include<stdio.h>
int main()
{
	int N,M,K,V;
	
	printf("Enter the number of student who wish to enroll in course\n");
	scanf("%d",&N);
	
	printf("Enter the total number of student capacity to enrolle in course\n");
	scanf("%d",&M);
	
	printf("Enter the number of student who have already enrolled in course\n");
	scanf("%d",&K);
	
	if(N>=1&&N<=M)
	{
		V=M-K;
		
		if(N<=V)
		{
			printf("\nYes");
		}
		else
		{
			printf("\nNo");
		}
	}
	else
	{
		printf("\nThere is no capacity greater than %d",M);
	}
	return 0;
}
