#include<stdio.h>
int main()
{
	int start=1,num;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(start<=num)
	{
		if(start%2==1)//(num%2!=0)
		{
			printf("\n%d",start);
		}
		start++;
	}
	return 0;
}
