#include<stdio.h>
int main()
{
	int i,j,s,c;
	for(i=1;i<=7;i++)
	{
		for(s=1;s<=7-i;s++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			(i==1||j==1)?(c=1):(c=(c*(i-j+1))/(j-1));
			
		//	if(i==1||j==1)
		//	{
		//		c=1;
		//	}
		//	else
		//	{
		//		c=(c*(i-j+1))/(j-1);
		//	}
			printf("%4d",c);
		}
		printf("\n\n");
	}
	return 0;
}
