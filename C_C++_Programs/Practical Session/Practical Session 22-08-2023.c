/////////////Practical Session: 22-08-2023 /////////////////
//====================================================================================================================
//Q.1) WAP to input and print array elements using pointer.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int *p,i,size;
	
	printf("Enter the size as per you require : ");
	scanf("%d",&size);
	
	int a[size];
	p=a;
	
	printf("\nEnter elements in array :\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",p);
		p++;
	}
	
	p=p-size;
	
	printf("\nDisplay Array : ");
	for(i=1;i<=size;i++)
	{
		printf("%u ",*p);
		p++;
	}
	
	return 0;
}
*/

//====================================================================================================================
//Q.2) WAP to input and sum of array elements using pointer.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int *p,i,size,sum;
	
	printf("Enter the size as you require : ");
	scanf("%d",&size);
	
	int a[size];
	
	p=a;
	
	printf("\nEnter elements in array :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(p+i));
	}
	
	printf("\n\nThe sum of all elements is : ");
	sum=0;
	for(i=0;i<size;i++)
	{
		sum = sum + *p;
		p++;
	}
	
	printf("%d",sum);
	
	return 0;
}
*/

//====================================================================================================================
//Q.3) WAP to input and print array reverse elements using pointer.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int *p,i,size,temp;
	
	printf("Enter the size as you require : ");
	scanf("%d",&size);
	
	int a[size];
	
	p=a;
	printf("\nEnter elements in array :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(p+i));
	}
////////////////////////////////////
//	for(i=0;i<size/2;i++)
//	{
//		temp=p[i];
//		p[i]=p[size-1-i];
//		p[size-1-i]=temp;
//	}
////////////////////////////////////	
	for(i=0;i<size/2;i++)
	{
		temp=*(p+i);
		*(p+i)=*(p+size-1-i);
		*(p+size-1-i)=temp;
	}
	
	
	printf("\n\nReverced array : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",*p);
		p++;
	}
	
	return 0;
}
*/

