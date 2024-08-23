#include<stdio.h>
int main()
{
	int start,end,sume=0;
	
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the ending number :\n");
	scanf("%d",&end);
	
	while(start<=end)
	{
		if(start%2==0)
		{
			sume=sume+start;
		}
		start++;	
	}
	printf("\nSum of even number is = %d",sume);
	return 0;
}
