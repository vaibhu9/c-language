#include<stdio.h>
int main()
{
	int start,end,sum=0;
	
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the ending number :\n");
	scanf("%d",&end);
	
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("\nSum of all number is : %d",sum);
	return 0;
}
