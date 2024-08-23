#include<stdio.h>
int main()
{
	int start=1,num;
	
	printf("Enter ther number :\n");
	scanf("%d",&num);
	
	while(start<=num)
	{
		if(start%2==0)//(start%2!=1)
		{
			printf("\n%d",start);
		}
		start++;
	}
	return 0;
}
