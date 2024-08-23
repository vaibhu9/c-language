////////////////////***Programs on looping***/////////////////////
//===================================================================================================================
//1)WAP to print all natural numbers from 1 to n using while loop.
//===================================================================================================================

/*
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",i++);
	}
	return 0;
}
*/

//==================================================================================================================
//2)WAP to print all natural numbers in reverse from n to 1 using while loop.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the maximum value :\n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d ",n--);
	}
	return 0;
}
*/

//==================================================================================================================
//3)WAP to all alphabet from a to z using while loop.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	char ch=65;
	while(ch<=90)
	{
		printf("%c%c ",ch++,ch+32);
	}
	return 0;
}
*/

//==================================================================================================================
//4)WAP to print all even numbers from 1 to n using while loop.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}
*/

//==================================================================================================================
//5)WAP to print all odd numbers from 1 to n using while loop.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}
*/

//=================================================================================================================
//6)WAP to print the sum of all natural numbers between 1 to n.
//=================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum of all natural number is : %d",sum);
	return 0;
}
*/

//=================================================================================================================
//7)WAP to find sum of all even numbers between 1 to n.
//=================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("Sum of all even numbers is : %d",sum);
	return 0;
}
*/

//=================================================================================================================
//8)WAP to find sum of all odd numbers between 1 to n.
//=================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the limit :\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("Sum of all odd numbers is : %d",sum);
	return 0;
}
*/

//==================================================
