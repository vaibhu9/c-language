#include<stdio.h>
int main()
{
	int xx,yy;
	printf("Enter the initial volume of TV :\n");
	scanf("%d",&xx);
	printf("Enter the final volume of TV :\n");
	scanf("%d",&yy);
	
	if(yy>xx)
	{
		printf("\nChef increased the volume of TV by pressing button %d times",(yy-xx));		
	}
	else
	{
		printf("\nChef decreased the voume of TV by pressing button %d times",(xx-yy));
	}
	return 0;
}
