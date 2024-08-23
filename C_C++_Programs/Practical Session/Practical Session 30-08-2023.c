///////////Practical Session- 30-08-2023 /////////////
//==========================================================================================================
//Q.1) WAP to pass the array function name as findevenodd(). then display the even and odd number in array.
//==========================================================================================================

/*
#include<stdio.h>

int i=0,j=0;
int findevenodd(int a[],int len)
{
	if(i<len)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
		i++;
		findevenodd(a,len);
	}
	if(j==0)
	{
		printf("\nTotal odd number in array are : ");
	}
	if(j<len)
	{
		if(a[j]%2==1)
		{
			printf("%d ",a[j]);
		}
		j++;
		findevenodd(a,len);
	}
}

int main()
{
	int a[10],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nTotal even number in array are : ");
	findevenodd(a,len);
	
	return 0;
}
*/

//==========================================================================================================
//Q.2) WAP to pass the array function name as findmajority(). If it's yes then return 1 otherwise return -1.
//==========================================================================================================

/*
#include<stdio.h>

int i=0,j=0,count=1,temp,flag=0;
int findmajority(int a[],int len)
{
	if(i<len)
	{
		if(a[i+1]>a[i])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			i=-1;
		}
		i++;
		findmajority(a,len);
	}
	if(j<len)
	{
		if(a[j]==a[j+1])
		{
			count++;
			if(count>(len/2))
			{
				printf("\nMajority element in given array is : %d",a[j]);
				flag=1;
			}
		}
		else
		{
			count=1;
		}
		j++;
		findmajority(a,len);
	}
	if(flag)
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
	int a[10],i,len,majority;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	majority=findmajority(a,len);
	printf("\nMajority are = %d",majority);
	
	return 0;
}
*/

//==========================================================================================================
//Q.3) WAP to pass the array function name as findoccurence(). then find occurence of each element in array.
//==========================================================================================================

/*
#include<stdio.h>

int i=0,j=0,temp,count=1;
int findoccurence(int a[],int len)
{
	if(j<len)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			j=-1;
		}
		j++;
		findoccurence(a,len);
	}
	if(i<len)
	{
		if(a[i+1]==a[i])
		{
			count++;
		}
		else
		{
			printf("\n%d====>%d",a[i],count);
			count=1;
		}
		i++;
		findoccurence(a,len);
	}
}

int main()
{
	int a[10],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nOccurence of elements are :");
	findoccurence(a,len);
	
	return 0;
}
*/


