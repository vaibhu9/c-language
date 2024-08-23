#include<stdio.h>
int main()
{
	int max;
	
	printf("Enter the maximum number :\n");
	scanf("%d",&max);
	
	while(max>=1)
	{
		printf("\n%d",max);
		max--;
	}
	return 0;
}
