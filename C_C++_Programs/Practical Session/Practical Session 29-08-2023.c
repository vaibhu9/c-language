////////Practical Session- 29-08-2023 //////////
//==========================================================================================================
//Q.1) WAP to count the digit of number using fuction recursion and return its count of number.
//==========================================================================================================

/*
#include<stdio.h>
int count=0;
int countdigit(int n)
{
	if(n!=0)
	{
		n=n/10;
		count++;
		
		countdigit(n);
	}
	return count;
}

int main()
{
	int n,digits;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	digits=countdigit(n);
	
	printf("\nTotal number of digits in %d are : %d",n,digits);
	
	return 0;
}
*/

//==========================================================================================================
//Q.2) WAP to check whether number is prime or not, if it is prime then return 1 otherwise return -1.
//==========================================================================================================

/*
int i=1,count=0;
int checkprime(int n)
{
	if(i<=n/2)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
		checkprime(n);
	}
	if(count>=2)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n,check;
	
	printf("Enter the number to check prime or not : ");
	scanf("%d",&n);
	
	check=checkprime(n);
	
	(check==1)?printf("\nGiven number %d is a prime : %d",n,check):printf("\nGiven number %d is not a prime : %d",n,check);
	
	return 0;
}
*/

//==========================================================================================================
//Q.3) WAP check whether number is perfect or not, if it is perfect then return 1 otherwise return -1.
//==========================================================================================================

/*
int i=1,sum=0;
int checkperfect(int n)
{
	if(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
		checkperfect(n);
	}
	if(sum==n)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int n,check;
	printf("Enter the number to check perfect or not : ");
	scanf("%d",&n);
	
	check=checkperfect(n);
	
	(check==1)?printf("\nGiven number %d is a perfect : %d",n,check):printf("\nGiven number %d is not a perfect : %d",n,check);
	
	return 0;
}
*/

