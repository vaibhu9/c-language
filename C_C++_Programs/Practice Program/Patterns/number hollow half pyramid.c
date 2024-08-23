#include<stdio.h>
int main()
{
	int i,j,num;
	
	for(i=1;i<=5;i++)
	{
		num=i;
		for(j=1;j<=5;j++)
		{
			
			if(i==1||j==1||j==6-i)
			{
				printf("%d ",num++);
			}
			else
			{
				printf("  ");
				num++;
			}
		
		}
		printf("\n");
	}
}
