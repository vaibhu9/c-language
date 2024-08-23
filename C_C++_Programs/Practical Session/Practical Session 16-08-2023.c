//==================================================================================================================
///////// Practical Session-16/08/2023 //////
//==================================================================================================================
//Q.1) Write a program in C to delete an element at desired position from an array.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,len,index;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the index to delete value : ");
	scanf("%d",&index);
	
	for(i=index;i<len;i++)
	{
		a[i]=a[i+1];
	}
	a[len-1]=0;
	
	printf("After deleting value :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.2) Write a program in c two Merge Array and stored the value in third array and display it.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j,k,len1,len2,len3;
	
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	len3=sizeof(c)/sizeof(c[0]);
	
	printf("Enter the elements in first array :\n");
	for(i=0;i<len1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements in second array :\n");
	for(j=0;j<len2;j++)
	{
		scanf("%d",&b[j]);
	}
	
	printf("\nFirst Array is :\n");
	for(i=0;i<len1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSecond Array is :\n");
	for(j=0;j<len2;j++)
	{
		printf("%d ",b[j]);
	}
	
	i=0;
	j=0;
	for(k=0;k<len3;k++)
	{
		if(i<len1)
		{
			c[k]=a[i++];
		}
		else
		{
			c[k]=b[j++];
		}
	}
	
	printf("\nThird merged array is :\n");
	for(k=0;k<len3;k++)
	{
		printf("%d ",c[k]);
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.3) Write a program in C to find the second largest element in an array ?
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,j,len,temp,sl,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	flag=0;
	for(i=len-1;i>0;i--)
	{
			if(a[i]>a[i-1])
			{
				sl=a[i-1];
				flag=1;
				break;
			}
	}
	
	(flag)?printf("\nThe second largest element in array is : %d",sl):printf("\nAll elements are same.");
	
	return 0;
}
*/

//==================================================================================================================
//Q.4) Write a program in C to find the majority element of an array ?
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,temp,count,me,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<len;i++)
	{
		if(a[i+1]>a[i])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			i=-1;
		}
	}
	
	count=1;
	flag=0;
	for(i=0;i<len;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
			if(count>=(len/2))
			{
				me=a[i];
				flag=1;
				break;
			}
		}
		else
		{
			count=1;
		}
	}
	if(flag)
	{
		printf("\nMajority element in array is : %d",me);
	}
	else
	{
		printf("\nNO majority element is there.");
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.5) Write a program in C to rotate an array by N positions ?
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,j,n,len,temp;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the position to rotate the array :\n");
	scanf("%d",&n);
	
	for(j=n;j>=1;j--)
	{
		temp=a[0];
		for(i=0;i<len;i++)
		{
			a[i]=a[i+1];
		}
		a[len-1]=temp;
	}
	
	printf("\nRotated array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

