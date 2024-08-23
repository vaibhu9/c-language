//====================================================================================================================
//***Assigment: 27/07/2023***//
//====================================================================================================================

//Q.1) WAP to find first and last digit of a number.
//====================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,rem;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	rem=num%10;
	
	while(num>9)
	{
		num=num/10;
	}
	printf("\nFirst digit is : %d\nand\nLast digit is : %d",num,rem);
	
	return 0;
}
*/


//Q.2)WAP to find sum of first and last digit of a number.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,last,sum;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	last=num%10;
	
	while(num>9)
	{
		num=num/10;
	}
	
	sum=num+last;
	
	printf("\nSum of the first and last digits is : %d",sum);
	
	return 0;
}
*/

//Q.3)WAP to swap first and last digits of a number.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int ,integer,num,last;
	
	printf("Enter an integer :\n");
	scanf("%d",&integer);
	
	num=integer;
	
	last=integer%10;                                /////Not Solved/////
	
	while(integer>0)
	{
		integer=integer/10;
	}
	
	
}
*/


//Q.4)WAP to calculate sum of digits of a number.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	printf("Sum of total digits is = %d",sum);
	return 0;
}
*/


//Q.5)WAP to calculate product of digits of a number.
/*
#include<stdio.h>
int main()
{
	int num,rem,product=1;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		product=product*rem;
	}
	printf("Product is %d",product);
	return 0;
}
*/


//Q.6)WAP to enter a number and print its reverse.
//=================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	printf("\nThe reversed number is : %d",rev);
	
	return 0;
}
*/


//Q.7)WAP to print all ASCII character with their values.
//=================================================================================================================
/*
#include<stdio.h>
int main()
{
	int a=65;
	while(a<=122)
	{
		printf("\n%c=%d",a,a);
		a++;
	}
	return 0;
}
*/


//Q.8)WAP to find all factors of a number.
//=================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,rem,temp;
	
	printf("Enter the number:\n");                   //That program is by mistake created.
	scanf("%d",&num);                               //It work like as it print only those factors value
	                                               //which is present in that number.
	temp=num;
	
	while(num>0)
	{
		rem=num%10;
		
		if(temp%rem==0)
		{
			printf("\n%d,",rem);
		}
		num=num/10;
	}
	return 0;
}
*/


//Q.8)WAP to find all factors of a number.
//=================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,i=1;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	printf("\nFactors of the %d is are as follow :\n",num);
	
	while(i<=num)
	{
		if(num%i==0)
		{
			printf("%d,",i);
		}
		i++;
	}
	return 0;
}
*/

//Q.9)WAP to find HCF (GCD) of two numbers.
//=================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter two number :\n");
	scanf("%d%d",&num1,&num2);
	
	while(num1!=num2)
	{
		if(num1>num2)
		{
			num1=num1-num2;  //num1-=num2;
		}
		else
		{
			num2-=num1;   //num2=num2-num1;
		}
	}
	printf("\nThe HCF(GCD) is : %d",num1);
	
	return 0;
	
}
*/

//Q.10)WAP to find LCM of two numbers.
/*
#include<stdio.h>
int main()
{
	int a,b,low,lcm;
	
	printf("Enter the two numbers :\n");
	scanf("%d%d",&a,&b);
	
	low=(a<b)?a:b;
	
	while(1)
	{
		if(low%a==0&&low%b==0)
		{
			lcm=low;
			break;
		}
		low++;
	}
	printf("\nThe LCM of %d and %d number is = %d",a,b,lcm);
	return 0;
}
*/
