#include<stdio.h>
int main()
{
	int start,end,sumo=0;
	
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the ending number :\n");
	scanf("%d",&end);
	
	while(start<=end)
	{
		if(start%2!=0)//(start%2==1)
		{
			sumo=sumo+start;
		}
		start++;	
    }
	printf("\nSum of odd number is = %d",sumo);
	return 0;
}
