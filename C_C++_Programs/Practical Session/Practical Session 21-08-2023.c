////////////////Practical Session- 21-08-2023/////////////////////
//====================================================================================================================
//Q.1) Recently ISRO launched loonar mission "Chandrayan-III" towards moon, After some days it reached near loonar orbit.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a[24],b[24],i,j,len1,len2;
	
	len1=sizeof(a)/sizeof(a[0]);
	
	printf("Enter the series of number :\n");
	for(i=0;i<len1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	j=0;
	len2=0;
	
	for(i=0;i<len1;)
	{
		b[j++]=(a[i]*10+a[i+1]);
		len2++;
		i=i+2;
	}
	
	printf("\nDecoded Message is : ");
	for(j=len2-1;j>=0;j--)
	{
		printf("%c ",b[j]-4);
	}
	
//	int a[12],i,len,mid,temp;
	
//	len=sizeof(a)/sizeof(a[0]);
//	mid=len/2;
	
//	printf("Enter the values in array :\n");
//	for(i=0;i<len;i++)
//	{
//		scanf("%d",&a[i]);
//	}
	
//	printf("\nDecoded message is :  ");
//	for(i=len-1;i>=0;i--)
//	{
//		printf("%c ",a[i]-4);
//	}
	
	return 0;
}
*/

//====================================================================================================================
//Q.2) WAP to accept number from user store in into variable,store address of that number into pointer and print its value and address of that variable.
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a,*ptr;
	
	printf("Enter the value : ");
	scanf("%d",&a);
	
	ptr=&a;
	
	printf("\n\nValue is : %d\tAddress is : %u",*ptr,ptr);
	
	return 0;
}
*/

//====================================================================================================================
//Q.3) WAP to calculate Addition,Subtraction,Multiplication,Division by using pointer.
//====================================================================================================================

/*
#include <stdio.h>
int main()
{
    int a,b,*p,*q,sum,sub,mul;
    float div;
    
    printf("Enter two Numbers :\n");
    scanf("%d%d",&a,&b);
    
    p = &a;
    q = &b;
    
    sum = *p + *q;
    sub = *p - *q;
    mul = *p * *q;
    div = (float)*p / (float)*q;
    
    printf("\nSum of entered numbers = %d\n",sum);
    printf("\nSubtraction of entered numbers = %d\n",sub);
    printf("\nMultiplication of entered numbers = %d\n",mul);
    printf("\nDivision of entered numbers = %.2f",div);
    
    return 0;
}
*/

//====================================================================================================================
//Q.4) Swap two numbers without using third variable and by using third variable (use pointer).
//====================================================================================================================

/*
#include<stdio.h>
int main()
{
	int a,b,*p,*q,temp;
	
	printf("Enter first number a = ");
	scanf("%d",&a);
	printf("\nEnter second number b = ");
	scanf("%d",&b);
	
	p=&a;
	q=&b;
	
	printf("\nSwaping without using third variable :\n");
	*p=*p^*q;
	*q=*p^*q;
	*p=*p^*q;
	
	a=*p;
	b=*q;
	printf("a = %d\nb = %d",a,b);
	
	
	printf("\n\nAgain Swap using third variable :\n");
	temp=*p;
	*p=*q;
	*q=temp;
	
	a=*p;
	b=*q;
	printf("a = %d\nb = %d",a,b);
	
	return 0;
}
*/

//====================================================================================================================
//Q.5) WAP to calculate power of any number by using pointer.
//====================================================================================================================

/*
#include<stdio.h>
#include<math.h>
int main()
{
	int b,i,*p,*q,power;
	
	printf("Enter the base : ");
	scanf("%d",&b);
	
	printf("\nEnter the index : ");
	scanf("%d",&i);
	
	p=&b;
	q=&i;
	
	power= pow(*p,*q);
	
	printf("\n\nPower is = %d",power);
	
	return 0;
}
*/

