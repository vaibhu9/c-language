//Wap to check whether number is neon or not.
//====================================================================================================================


#include<stdio.h>
int main()
{
	int n,sum=0,r,s;
	
	printf("Enter the number :\n");
	scanf("%d",&n);
	
	s=n*n;
	while(s>0)
	{
		r=s%10;
		s=s/10;
		sum=sum+r;
	}
	(n==sum)?printf("\nNumber is neon."):printf("\nNumber is not neon.");
}

//====================================================================================================================
//Wap to print the followong number series upto nth number.
//1 4 9 16 25 36 49 64 81 100.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",i*i);
	}
	return 0;
}
*/

//====================================================================================================================
//Wap to print the following number series upto nth number.
//1 2 4 7 11 16 22 29 37 46.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i,n,m=1;
	
	printf("Enter the limit :\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",m);
		m=m+i;
	}
	return 0;
}
*/

