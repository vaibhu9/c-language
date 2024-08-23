/////*****Programs on Array*****/////
//================================================================================================================
//Q.1) WAP to enter the five elements in array and show it.
//================================================================================================================

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

//=================================================================================================================
//Q.2) WAP to enter the five elements in array and find out the maximum and minimum elements.
//=================================================================================================================

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

//=================================================================================================================
//Q.3) WAP to enter the five elements and display in ascending order ?
//=================================================================================================================

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

//=================================================================================================================
//Q.4) WAP to insert the element on specified on position in array.
//=================================================================================================================

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

//=================================================================================================================
//Q.5) Write a program to enter the 5 values in ascending order and store in array and find out the missing element from array.
//=================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,j,len,temp,count;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the values in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nYour Array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nArray in ascending order :\n");
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
	
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nMissing elements from array :\n");
	for(i=0;i<len;i++)
	{
		count=a[i];
		while((a[i+1]-count)>1)
		{
			count++;
			printf("%d ",count);
		}
	}
	
	return 0;
}
*/

//=================================================================================================================
//Q.6) WAP to enter the five element in array and reverse it.
//=================================================================================================================

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

//=================================================================================================================
//Q.7) WAP to enter the 10 elements in array and print the occurance of every elements.
//=================================================================================================================

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

//=================================================================================================================
//Q.8) WAP in c to merge two arrays of same size sorted in decending order.
//=================================================================================================================

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

//=================================================================================================================
//Q.9) WAP in c to separate odd and even integers in separate arrays.
//=================================================================================================================

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

//================================================================================================================
//Q.10) WAP in c to delete an element at desired position from an array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,in;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nYour array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nEnter index to delete value : ");
	scanf("%d",&in);
	
	for(i=in;i<len;i++)
	{
		a[i]=a[i+1];
	}
	
	printf("\nAfter deleting elements from array :\n");
	for(i=0;i<len-1;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

//=================================================================================================================
//Q.11) Write a program in C to find the second largest element in an array ?
//=================================================================================================================

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

//================================================================================================================
//Q.12) WAP to find a pair with given sum in the array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[6],i,j,len,sum,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the sum to find the pair of index : ");
	scanf("%d",&sum);
	
	printf("\nPair of the index are :\n");
	
	flag=1;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(sum==(a[i]+a[j]))
			{
				printf("\n%d and %d",i,j);
				flag=0;
				break;
			}
		}
	}
	
	if(flag)
	{
		printf("\nThere is no pair of element is present in array for sum = %d.",sum);
	}
	return 0;
}
*/

//================================================================================================================
//Q.13) Write a program in C to find the majority element of an array ?
//================================================================================================================

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

//================================================================================================================
//Q.14) Write a program in C to rotate an array by N positions ?
//================================================================================================================

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

//================================================================================================================
//Q.15) WAP to find the ceiling in a sorted array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[8],i,j,len,temp,n;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the number to find ceiling element : ");
	scanf("%d",&n);
	
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
	
	for(i=0;i<len;i++)
	{
		if(a[i]>=n)
		{
			break;
		}
	}
	
	printf("\nThe ceiling element is : %d",a[i]);
	
	return 0;
}
*/

//================================================================================================================
//Q.16) WAP to find Floor and Ceil of the number 0 to 10 from a sorted array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[6],i,j,len,f,c,n=0,temp;
	
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
	
	printf("\nCeiling and Floor elements are :\n");
	for(n=0;n<=10;n++)
	{
		printf("\nNumber is : %d",n);
		for(i=0;i<len;i++)
		{
			if(a[i]>=n)
			{
				printf("\tCeiling is : %d",a[i]);
				break;
			}
			if(i==(len-1))
			{
				printf("\tCeiling is : -1");
			}
		}
		for(i=len-1;i>=0;i--)
		{
			if(a[i]<=n)
			{
				printf("\tFloor is : %d",a[i]);
				break;
			}
			if(i==0)
			{
				printf("\tFloor is : -1");
			}
		}
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.17) WAP to find smallest missing element from a sorted array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[8],i,j,len,temp,count;
	
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
	
	for(i=0;i<len;i++)
	{
		count=a[i];
		if((a[i+1]-count)>1)
		{
			++count;
			break;
		}
		
	}
	
	printf("\nThe smallest missing element is : %d",count);
	
	return 0;
}
*/

//================================================================================================================
//Q.18) WAP to next greater elements in a given unsorted array. Elements for which no greater element exist, consider next greater element as -1.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[6],b[6],i,j,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the values in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nNext Bigger Elements are :\n");
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[j]>a[i])
			{
				printf("\nNext Bigger Elements of %d in array is : %d",a[i],a[j]);
				break;
			}
			else if(j==(len-1))
			{
				printf("\nNext Bigger Elements of %d in array is : -1",a[i]);
			}
		}
		if(i==(len-1))
		{
			printf("\nNext Bigger Elements of %d in array is : -1",a[i]);
		}
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.19) WAP to find two elements whose sum is closest to zero.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],b[1],c[1],i,j,k,len,sum,temp;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	i=0;
	k=0;
	temp=a[i]+a[i+1];
	b[k]=a[i];
	c[k]=a[i+1];
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			sum=a[i]+a[j];
			if(sum<0)
			{
				sum=sum*-1;
			}
			if(sum<temp)
			{	
				temp=sum;
				b[k]=a[i];
				c[k]=a[j];
			}
		}
	}	
	printf("\nThe pair of elements whose sum is minimum are : [%d,%d]",b[k],c[k]);
	
	return 0;
}
*/


//================================================================================================================
//Q.20) WAP to find a subarray with given sum from the given array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,len,s,e;
	char ch;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d  ",a[i]);
	}
	
	do
	{
		printf("\nEnter Initial position : ");
		scanf("%d",&s);
		printf("Final position : ");
		scanf("%d",&e);
		
		printf("\n[%d..%d] :  {",s,e);
		for(i=s;i<=e;i++)
		{
			printf("%2d",a[i]);
		}
		printf(" }");
		
		printf("\n\nDo you want to continue : ");
		scanf("%c",&ch);
		
		ch= getch();
		
	}while(ch=='y');
	
	return 0;
}
*/

//================================================================================================================
//Q.21) WAP to find if a given integer x appears more than n/2 times in a sorted array of n integers.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int n,i,len,x,count;
	
	printf("Enter the number of integers : ");
	scanf("%d",&n);
	
	int a[n];
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("\nEnter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the integer to check : ");
	scanf("%d",&x);
	
	count=0;
	for(i=0;i<len;i++)
	{
		if(x==a[i])
		{
			++count;
		}
	}
	
	if(count>=(n/2))
	{
		printf("\n%d appears more than %d times in array.",x,n/2);
	}
	else
	{
		printf("\nThere is %d not appears upto %d in array.",x,n/2);
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.22) WAP to find the maximum circular subarray sum of a given array.
//================================================================================================================



//================================================================================================================
//Q.23) WAP to move all zeroes to end of a given array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,j,len,t,t1,temp;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	for(i=0;i<len;i++)
	{
		t=i;
		for(i=0;i<len;i++)
		{
			if(a[i]==0)
			{
				t1=i;
				temp=a[i];
				for(j=i;j<len-1;j++)
				{
					a[i]=a[i+1];
					i++;
				}
				a[(len-1)]=temp;
				i=t1;
			}
		}
		i=t;
	}
	
	printf("\n\nAfter moveing all zeros :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.24) WAP to count the number of inversion in a given array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,j,len,count=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nInversions are : ");
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[j]<a[i])
			{
				printf("(%d,%d) ",a[i],a[j]);
				count++;
			}
		}
	}
	
	printf("\nThe number of inversion can be formed from the array is : %d",count);
}
*/

//================================================================================================================
//Q.25) WAP to find out the maximum difference between any two elments such that larger element appears after the smaller number.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[6],s[1],l[1],i,j,k,len,td,d;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);//7 9 5 6 13 2
	}
	
	d=0;
	for(i=0;i<len;i++)			//i=3
	{
		for(j=i+1;j<len;j++)	//j=4
		{
			if(a[j]>a[i])		//13>6
			{
				td=a[j]-a[i];	//d=8
				if(td>d)		//8>6
				{
					d=td;		//temp=8
					s[k]=a[i];	//s[0]=5
					l[k]=a[j];	//l[k]=13
				}
			}
		}
	}
	
	printf("\nThe elements which provide maximum difference is : %d,%d",s[k],l[k]);
	printf("\nThe Maximum difference between two elements in the array is : %d",d);
	
	return 0;
}
*/

//================================================================================================================
//Q.26) WAP to count all distinct pairs for a specific difference.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[8],i,j,len,d,td,count=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the values in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the difference : ");
	scanf("%d",&d);
	
	printf("\n\nThe distinct pairs for differece %d are : ",d);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			td=a[j]-a[i];
			if(td==d)
			{
				printf("[%d,%d] ",a[j],a[i]);
				count++;
			}
		}
	}
	printf("\n\nNumber of distinct pairs for difference %d are : %d",d,count);
	
	return 0;
}
*/

//================================================================================================================
//Q.27) WAP to find the maximum repeating number in a given array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int i,j,len,n,k,c,tc,rn;
	
	printf("Enter the length of array : ");
	scanf("%d",&n);
	
	int a[n];
	len=sizeof(a)/sizeof(a[0]);
	
	printf("\nEnter the values in array :\n");
	for(i=0;i<len;)
	{
		scanf("%d",&k);
		if(k<n)
		{
			a[i++]=k;
		}
	}
	
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])
			{
				tc++;
				if(tc>c)
				{
					c=tc;
					rn=a[i];
				}
			}
		}
	}
	
	printf("\n\nThe maximum repeating number is : %d",rn);
	
	return 0;
}
*/

//================================================================================================================
//Q.28) WAP to print all possible combinations of r elements in a given array.
//================================================================================================================


//================================================================================================================
//Q.29) WAP to find a pair with the given difference.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[5],i,j,len,d,td,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the values in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the difference : ");
	scanf("%d",&d);
	
	printf("\nThe given array is :\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nThe given differece is : %d ",d);
	flag=0;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			td=a[j]-a[i];
			if(td==d)
			{
				printf("\nThe pair are : [%d,%d] ",a[i],a[j]);
				flag=1;
				break;
			}
		}
		if(flag)
		{
			break;
		}
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.30) WAP to find the minimum distance between two numbers in a given array.
//================================================================================================================


//================================================================================================================
//Q.31) WAP to rearrange positive and negative numbers alternatively in a given array.
//================================================================================================================


//================================================================================================================
//Q.32) WAP to find the maximum for each and every contigious subarry of size k from a given array.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[10],i,j,k,m,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nEnter the size of subarray : ");
	scanf("%d",&k);
	
	printf("\n\nContigious subarrays of size %d from a given array are :\n",k);
	for(i=0;i<=len-k;i++)
	{
		m=0;
		for(j=i;j<(i+k);j++)
		{
			printf("%d ",a[j]);
			
			if(a[j]>m)
			{
				m=a[j];
			}
		}
		printf("----> %d\n",m);
//		for(j=i;j<len;j++)
//		{

//			printf("%d ",a[j]);
			
//			if(a[j]>m)
//			{
//				m=a[j];
//			}
			
//			if((j-i+1)==k)
//			{
//				printf("----> %d\n",m);
//				break;
//			}
//		}
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.33) WAP to convert the array in such a way that double its value and replace the next number with 0 if current and next element are same and rearrange the array such that all 0's shifted to the end.
//================================================================================================================


//================================================================================================================
//Q.34) WAP to remove duplicates from unsorted array using set data structure.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[8],i,j,tj,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter elements in array :\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}								////////////not solved//////////
									///if we input more than 3 or 4 same digit output is wrong///
	printf("\nGiven array is : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nAfter removing duplicates from array :\n");
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			tj=j;
			if(a[i]==a[j])
			{
				for(j=j;j<len;j++)
				{
					a[j]=a[j+1];
				}
				len--;
			}
			j=tj;
		}
	}
	
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.35) WAP for a 2D array of size 3*3 and print the matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3],i,j,len;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the values in matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
				scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix are :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
				printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
}
*/

//================================================================================================================
//Q.36) WAP to addition of two matrices of same size.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], sum[3][3], i,j,len1,len2,len3;
	
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	len3=sizeof(sum)/sizeof(sum[0]);
	
	printf("\nEnter elements of 1st matrix:\n");
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			scanf("%d",&a[i][j]);
    	}
	}
	
	printf("Enter elements of 2nd matrix:\n");
	for(i=0;i<len2;i++)
	{
		for(j=0;j<len2;j++)
		{
    		scanf("%d",&b[i][j]);
    	}
	}
    
	// adding two matrices
	for(i=0;i<len3;i++)
    {
    	for(j=0;j<len3;j++)
		{
    		sum[i][j] = a[i][j] + b[i][j];
		}
	}

	// printing the result
	printf("\nSum of two matrices: \n");
	for(i=0;i<len3;i++)
    {
    	for (j=0;j<len3;j++)
		{
			printf("%d  ",sum[i][j]);
	    }
	    printf("\n");
	}

	return 0;
}
*/

//================================================================================================================
//Q.37) WAP to subtraction of two matrices.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], d[3][3], i,j,len1,len2,len3;
	
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(b)/sizeof(b[0]);
	len3=sizeof(d)/sizeof(d[0]);
	
	printf("\nEnter elements of 1st matrix:\n");
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			scanf("%d",&a[i][j]);
    	}
	}
	
	printf("Enter elements of 2nd matrix:\n");
	for(i=0;i<len2;i++)
	{
		for(j=0;j<len2;j++)
		{
    		scanf("%d",&b[i][j]);
    	}
	}
    
	// subtract two matrices
	for(i=0;i<len3;i++)
    {
    	for(j=0;j<len3;j++)
		{
    		d[i][j] = a[i][j] - b[i][j];
		}
	}

	// printing the result
	printf("\nSum of two matrices: \n");
	for(i=0;i<len3;i++)
    {
    	for (j=0;j<len3;j++)
		{
			printf("%d  ",d[i][j]);
	    }
	    printf("\n");
	}

	return 0;
}
*/

//================================================================================================================
//Q.38) WAP to multiplication of two square matrices.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,k,sum;
	
	printf("Enter the elements in 1st matrice :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter the elements in 2st matrice :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nMultiplication of two matrice :\n");
	sum=0;
	for(i=0;i<2;i++)
	{	
		for(j=0;j<2;j++)	
		{
			for(k=0;k<2;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}	
			printf("%4d",sum);	
			sum=0;
		}
		printf("\n");
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.39) WAP to find transpose of a given matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3], t[3][3], i,j,len1,len2;
	
	len1=sizeof(a)/sizeof(a[0]);
	len2=sizeof(t)/sizeof(t[0]);
	
	printf("\nEnter elements of matrix :\n");
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len1;j++)
		{
			scanf("%d",&a[i][j]);
    	}
	}
	
	printf("\nGiven Matrice is :\n");
	for(i=0;i<len1;i++)
    {
    	for (j=0;j<len1;j++)
		{
			printf("%4d",a[i][j]);
	    }
	    printf("\n");
	}
    
	// logic to transpose of matrice
	for(i=0;i<len2;i++)
    {
    	for(j=0;j<len2;j++)
		{
    		t[i][j] = a[j][i];
		}
	}

	// printing the result
	printf("\nTranspose of Matrice :\n");
	for(i=0;i<len2;i++)
    {
    	for (j=0;j<len2;j++)
		{
			printf("%4d",t[i][j]);
	    }
	    printf("\n");
	}

	return 0;
}
*/

//================================================================================================================
//Q.40) WAP to find sum of right diagonals of a matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3], i,j,len,sumrd=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("\nEnter elements of matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&a[i][j]);
    	}
	}
	
	printf("\nGiven Matrice is :\n");
	for(i=0;i<len;i++)
    {
    	for (j=0;j<len;j++)
		{
			printf("%d  ",a[i][j]);
			
			if(j==len-1-i)
    		{
    			sumrd=sumrd+a[i][j];
			}
		
		}
	    printf("\n");
	}
    
	// logic to sum of right diagonal of matrice
//	for(i=0;i<len;i++)
//	{
//		for(j=0;j<len;j++)
//		{
//	 		if(j==len-1-i)
//			{
//				sumrd=sumrd+a[i][j];
//			}
//		}
//	}
	
	printf("\nThe sum of right diagonal is : %d",sumrd);

	return 0;
}
*/

//================================================================================================================
//Q.41) WAP to find the sum of left diagonals of a matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3],i,j,len,sumld=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements of matrice :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nGiven matrice is :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%d  ",a[i][j]);
			
			if(i==j)
			{
				sumld=sumld+a[i][j];
			}
		}
		printf("\n");
	}
	
//	for(i=0;i<len;i++)
//	{
//		for(j=0;j<len;j++)
//		{
//			if(i==j)
//			{
//				sumld=sumld+a[i][j];
//			}
//		}
//	}
	
	printf("\nThe sum of right diagonal is : %d",sumld);
	
	return 0;
}
*/

//================================================================================================================
//Q.42) WAP to find sum of rows an columns of a matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3],cs[3], i,j,k,len,sumr,sumc;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the elements in Matrice :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nGiven Matrice is :\n");
	k=0;
	for(i=0;i<len;i++)
	{
		sumr=0;
		sumc=0;
		for(j=0;j<len;j++)
		{
			printf("%6d",a[i][j]);
			sumr=sumr+a[i][j];
			sumc=sumc+a[j][i];
			
		}
		printf("   =%2d",sumr);
		cs[k++]=sumc;
		printf("\n\n");
	}
	
	for(k=0;k<len;k++)
	{
		printf("   =%2d",cs[k]);
	}
	
//	for(i=0;i<len;i++)
//	{
//		sumr=sumc=0;
//		for(j=0;j<len;j++)
//		{
//			sumr=sumr+a[i][j];
//			sumc=sumc+a[j][i];
//		}
//		printf("\nSum of %d row = %4d  :  Sum of %d column = %4d",i+1,sumr,i+1,sumc);
//	}
	
	return 0;
}
*/

//================================================================================================================
//Q.43) WAP to print or display the lower triangular of a given matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3],i,j,len;
	
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the values in matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
				scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nGiven Matrix are :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
				printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nLower triangular Matrix are :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(i<=j)
			{
				printf("%d  ",a[i][j]);
			}
			else
			{
				printf("0  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.44) WAP to print or display upper triangular matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3],i,j,len;
	
	len=sizeof(a)/sizeof(a[0]);
	printf("Enter the values in matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
				scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nGiven Matrix are :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
				printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nLower triangular Matrix are :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(i>=j)
			{
				printf("%d  ",a[i][j]);
			}
			else
			{
				printf("0  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.45) WAP to calculate determinant of a 3*3 matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3],i,j,det;
	
	printf("Enter elements in array :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nGiven Matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
	det= a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))  -a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))  +a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
	
	printf("\nDeterminant of matrix is : %d",det);
}
*/

//================================================================================================================
//Q.46) WAP to accept a matrix and determine whether it is a sparse matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[2][2],i,j,len,tcount=0,count=0;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the values in matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&a[i][j]);
			tcount++;
		}
	}
	
	printf("\nGiven matrix is :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(a[i][j]==0)
			{
				count++;
			}
		}
	}
	if(count>tcount/2)
	{
		printf("\nGiven matrix is sparse matrix.\nThere are %d number of zeros in the matrix.",count);
	}
	else
	{
		printf("\nGiven matrix is not sparse matrix.");
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.47) WAP to accept two matrices and check whether they are equal.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,len,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter values in 1st matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter values in 2nd matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nGiven matrix are :\n1st matrix\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n2nd matrix\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	
	flag=1;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				flag=0;
				break;
			}
		}
	}
	if(flag)
	{
		printf("\nBoth matrices are equal.");
	}
	else
	{
		printf("\nBoth matrices are not equal.");
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.48) WAP to check whether a given matrix is an identity matrix.
//================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[3][3],i,j,len,flag;
	
	len=sizeof(a)/sizeof(a[0]);
	
	printf("Enter values in matrix :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nGiven matrix is :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	
	flag=1;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				{
					flag=0;
					break;
				}
			}
			else if(a[i][j]!=0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag)
	{
		printf("\nThe matrix is an identity matrix.");
	}
	else
	{
		printf("\nThe matrix is not identity matrix.");
	}
	
	return 0;
}
*/

