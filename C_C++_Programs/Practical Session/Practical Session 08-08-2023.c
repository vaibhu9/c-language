////////practical session 08-08-2023 //////////////
//====================================================================================================================

//All quation using array size is 10.
//====================================================================================================================
//WAP to enter elements in array and display it.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the values in array.\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The values of array is:\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]=====>%d\n",i,a[i]);
	}
	return 0;
}
*/

//====================================================================================================================
//WAP to calculate sum of elements in array.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,sum=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array.\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe elements of array is:\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]=====>%d\n",i,a[i]);
	}
	
	for(i=0;i<len;i++)
	{
		sum=sum+a[i]++;
	}
	printf("\nSum of the elements is : %d",sum);
	return 0;
}
*/

//====================================================================================================================
//WAP to find max number in array.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,max;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe elements in array is:\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]=====>%d\n",i,a[i]);
	}
	
	max=a[0];
	for(i=0;i<len;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nThe max element in array is : %d",max);
	
	return 0;
}
*/

//====================================================================================================================
//WAP to find min number in array.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,min;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the element in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe elements in array is :");
	for(i=0;i<len;i++)
	{
		printf("\na[%d]=====>%d",i,a[i]);
	}
	
	min=a[0];
	for(i=0;i<len;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n\nThe min element in array : %d",min);
	return 0;
}
*/

//====================================================================================================================
//WAP to find even number in array.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,flag;
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the values in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe values in array is :\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]=====>%d\n",i,a[i]);
	}
	
	printf("\nEven numbers in array is :\n");
	for(i=0;i<len;i++)
	{
		flag=0;
		if(a[i]%2==0)
		{
			flag=1;
		}
		if(flag)
		{
			printf("%d  ",a[i]);
		}
	}
	return 0;
}
*/

//====================================================================================================================
//WAP to find odd number in array.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe elements in array is :\n");
	for(i=0;i<len;i++)
	{
		printf("a[%d]=====>%d\n",i,a[i]);
	}
	
	printf("\nThe odd numbers in array is :\n");
	for(i=0;i<len;i++)
	{
		flag=0;
		if(a[i]%2!=0)
		{
			flag=1;
		}
		if(flag)
		{
			printf("%d  ",a[i]);
		}
	}
	return 0;
}
*/

