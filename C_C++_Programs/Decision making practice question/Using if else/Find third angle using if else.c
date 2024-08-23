#include<stdio.h>
int main()
{
	int a1,a2;
	
	printf("Enter two angles of triangle:\n");
	scanf("%d%d",&a1,&a2);
	
	if (a1>=90)
	{
		
		if(a1==90&&a2==90||a1==0||a2==0)
		{
			printf("\nThe triangle is Invalid");
		}
	}
	else
	{
		printf("\nThird angle is : %d",(180-a1-a2));
	}
}
