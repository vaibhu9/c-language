/////////////Practical Session- 09-08-2023 ///////////////////////
//====================================================================================================================
//Q.1) WAP to print all prime numbers from array.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,n,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the numbers in array.\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nTotal prime numbers in array :\n");
	for(i=0;i<len;i++)
	{
		flag=1;
		for(n=2;n<=a[i]/2;n++)
		{
			if(a[i]%n==0)
			{
				flag=0;
				break;
			}
		}
		if(flag&&a[i]!=1)
			{
				printf("%d ",a[i]);
			}
	}
	return 0;
}
*/

//====================================================================================================================
//Q.2) WAP to take array of size 5, store values in it and reverse array.
//====================================================================================================================


#include<stdio.h>
int main()
{
	int a[5],i,len,temp;
	
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the values to store in array.\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nBefore reverse array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nAfter Reverse array is :\n");
	
//	for(i=len-1;i>=0;i--)
//	{ printf("%d ",a[i]);}
//___________________________________________________________
//					===== OR =====
//___________________________________________________________	
	for(i=0;i<len/2;i++)
	{
		temp=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=temp;
	}
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}


//====================================================================================================================
//Q.3) WAP to take 10 digit mobile number in array and replace some digit by special symbol.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter 10 digit mobile number in array.\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nYour 10 digit mobile number is :\n");
	for(i=0;i<len;i++)
	{
		(i<=5)?printf("%d",a[i]):printf("*");
	}
	return 0;
}
*/


