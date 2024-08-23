#include<stdio.h>
int main()
{
	int start,end;
	
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the ending number :\n");
	scanf("%d",&end);
	
	while(start<=end)
	{
		printf("\n%d",start);
	    start++;
	}
	return 0;
}
