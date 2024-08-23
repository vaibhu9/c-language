//Q.1) WAP to enter the five elements in array and show it.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the five elements :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nDisplay elements in array.\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.2) WAP to enter the five elements in array and calculate the sum of all elements.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,len,sum=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the five elements :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<len;i++)
	{
		sum=sum+a[i];
	}
	printf("\nSum of total elements in array is : %d",sum);
	
	return 0;
}
*/

//==================================================================================================================
//Q.3) WAP to enter the five elements in array and find out the maximum and minimum elements.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,len,max,min;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the five elements :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	min=a[0];
	for(i=0;i<len;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("\nMax element in array is : %d",max);
	printf("\nMin element in array is : %d",min);
	
	return 0;
}
*/

//==================================================================================================================
//Q.4) WAP to enter the five elements and display in ascending order ?
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,len,temp;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter five elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	//_______________________________________________
	
	for(i=0;i<len;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			i=-1;
		}
	}
	
	printf("\nDisplay array in ascending order :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.5) WAP to insert the element on specified on position in array.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[6],i,len,in,v;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the five elements in array :\n");
	for(i=0;i<len-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBefore inserting value :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nEnter the index : ");
	scanf("%d",&in);
	printf("Enter the value : ");
	scanf("%d",&v);
	
	if(in>=0&&in<len)
	{
		for(i=len-2;i>=in;i--)
		{
			a[i+1]=a[i];
		}
		a[in]=v;

		printf("\nAfter inserting value :\n");
		for(i=0;i<len;i++)
		{
			printf("%d ",a[i]);
		}
	}
	else
	{
		printf("\nInvalid index.");
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.6) WAP to enter the five element in array and reverse it.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,len,mid,temp;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	mid=len/2;
	for(i=0;i<mid;i++)
	{
		temp=a[i];
		a[i]=a[(len-1)-i];
		a[(len-1)-i]=temp;
	}
	
	printf("\nReversed array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.7) WAP to enter the 10 elements in array and print the occurance of every elements.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,j,len,temp,count;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements :\n");
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

	printf("\nSorted array in decending order :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nOccurrence of elements in array :");
	count=1;
	for(i=0;i<len;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
		else
		{
			printf("\n%d=====>%d",a[i],count);
			count=1;
		}
	}

	return 0;
}
*/

//==================================================================================================================
//Q.8) WAP in c to merge two arrays of same size sorted in decending order.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],b[5],c[10],i,j,k,l,len1,len2,len3,temp;
	
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	len3=sizeof(c)/sizeof(c[0]);
	
	printf("Enter elements in first array :\n");
	for(i=0;i<len1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter elements in second array :\n");
	for(j=0;j<len2;j++)
	{
		scanf("%d",&b[j]);
	}
	
	i=0;
	j=0;
	for(k=0;k<len3;k++)
	{
		if(k<len1)
		{
			c[k]=a[i++];
		}
		else
		{
			c[k]=b[j++];
		}
	}
	
	printf("\nThird array :\n");
	for(k=0;k<len3;k++)
	{
		printf("%d ",c[k]);
	}
	
	for(k=0;k<len3;k++)
	{
		for(l=k+1;l<len3;l++)
		{
			if(c[k]<c[l])
			{
				temp=c[k];
				c[k]=c[l];
				c[l]=temp;
			}
		}
	}
	
	printf("\n\nThird merged and sorted in descendin order array is :\n");
	for(k=0;k<len3;k++)
	{
		printf("%d ",c[k]);
	}
	
	return 0;
}
*/

//==================================================================================================================
//Q.9) WAP in c to separate odd and even integers in separate arrays.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],e[10],o[10],i,j,k,len,le=0,lo=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	j=0;
	k=0;
	for(i=0;i<len;i++)
	{
		if(a[i]%2==0)
		{
			e[j++]=a[i];
			le++;
		}
		else
		{
			o[k++]=a[i];
			lo++;
		}
	}
	
	printf("\nEven integer array :\n");
	for(j=0;j<le;j++)
	{
		printf("%d ",e[j]);
	}
	
	printf("\n\nOdd integer array :\n");
	for(k=0;k<lo;k++)
	{
		printf("%d ",o[k]);
	}
	
	return 0;
}
*/

