//Wap to print following number series using for loop.
//16 1 14 4 12 9 10 16 8 25 6 36 4 49 2.
//=================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i,n,m,p;
	printf("Enter the starting number :\n");
	scanf("%d",&n);
	
	for(i=n,m=1;i>0;i=i-2,m++)
	{
		p=pow(m,2);
		printf("%d %d ",i,p);
	}
	return 0;
}
*/

//====================================================================================================================
//Wap to display prime factors (those factors of a number are prime) of number.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int n,i,j,flag;
	printf("Enter the number :\n");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			for(j=2;j<=(i/2);j++)
			{
				if(i%j==0)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}
*/

//====================================================================================================================
//Wap to print following number series using for loop.
//8 8 7 27 6 64 5 125 4 216 3 343 2 512 1.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i,n,m,p;
	printf("Enter the starting number :\n");
	scanf("%d",&n);
	
	for(i=n,m=2;i>0;i--,m++)
	{
		p=pow(m,3);
		printf("%d %d ",i,p);
	}
	return 0;
}
*/

//====================================================================================================================
//Wap to print the following number series using for loop.
//1 1 2 4 3 9 4 16 5 25 6 36 7 49 8 64 9 81 10 100.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i,a,n,p;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	
	for(i=1,a=1;i<=n;i++,a++)
	{
		p=pow(a,2);
		printf("%d %d ",i,p);
	}
	return 0;
}
*/

