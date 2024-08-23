//==================================================================================================================
//***Topic name:- While Loop statement***///
//==================================================================================================================

//program to print "Hello Vaibhav" 10 times.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int a=1;
	
	while(a<=10)
	{
		printf("\nHello Vaibhav");
		
		a++;
	}
	getch();
}
*/


//program to print "Hello Vaibhav" by taking input from user.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int a=1,limit;
	
	printf("Enter ther value of limit :\n");
	scanf("%d",&limit);
	
	while(a<=limit)
	{
		printf("\nHello Vaibhav");
		
		a++;
	}
	getch();
}
*/


//program to print numbering give input from user.
//==================================================================================================================

/*
#include<stdio.h>
int main()
{
	int start,end;
	
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the ending number :\n");
	scanf("%d",&end);
	
	while(start<=end)
	{
		printf("\n%d",start);
	    start++;
	}
	return 0;
}
*/

//WAP to print reverce numbering.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int max;
	
	printf("Enter the maximum number :\n");
	scanf("%d",&max);
	
	while(max>=1)
	{
		printf("\n%d",max);
		max--;
	}
	return 0;
}
*/


//WAP to print all alphabet a to z.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	char a=65;
	
	while(a<=90)
	{
		printf("\n%c",a);
		a++;
	}
	return 0;
}
*/


//WAP to print even number only.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int start=1,num;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(start<=num)
	{
		if(start%2==0)//(start%2!=1)
		{
			printf("\n%d",start);
		}
		start++;
	}
}
*/

//WAP to print odd number.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int start=1,num;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(start<=num)
	{
		if(start%2==1)//(num%2!=0)
		{
			printf("\n%d",start);
		}
		start++;
	}
	return 0;
}
*/

//WAP to print sum of all number.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int start,end,sum=0;
	
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the ending number :\n");
	scanf("%d",&end);
	
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("\nSum of all number is : %d",sum);
	return 0;
}
*/


//WAP to print sum of even and odd number separatly.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int start,end,sume=0,sumo=0;
	
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the ending number :\n");
	scanf("%d",&end);
	
	while(start<=end)
	{
		if(start%2==0)
		{
			sume=sume+start;
		}
		else
		{
			sumo=sumo+start;
		}
		start++;	
	}
	printf("\nSum of even number is = %d",sume);
	printf("\nSum of odd number is = %d",sumo);
	return 0;
}
*/

//WAP to print numbering like as 11,22,33,44.........up to 99.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int start=0,last=99;
	
	//printf("Enter the last number :\n");
	//scanf("%d",&last);
	
	while(start<=last)
	{
		start=start+11;
		printf("\n%d",start);
	}
	return 0;
	
}
*/

//WAP to print multiplication table of any number.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,table,i=1;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(i<=10)//5<=10
	{
		table=num*i; //5*1;
		printf("\n%d",table);
		i++;
	}
	return 0;
}
*/

//WAP to count number of digits in a number.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,digits=0;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		num=num/10;
		digits++;
	}
	printf("\nNumber of digits is : %d",digits);
	return 0;
}
*/

//WAP to intup number and calculate its factorial.
//==================================================================================================================
/*
#include<stdio.h>
int main()
{
	int num,factorial=1;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(num>=1)
	{
		factorial=factorial*num;
		num--;
	}
	printf("Factorial is = %d",factorial);
	return 0;
}
*/

//WAP to input two values and consider the first is base and second is index, and calculate the power.
//==================================================================================================================

#include<stdio.h>
int main()
{
	int i=1,base,index,power=1;
	
	printf("Enter two values :\n");
	scanf("%d%d",&base,&index);
	
	while(i<=index)
	{
		power=power*base;
		i++;
	}
	printf("Power of %d = %d",base,power);
	return 0;
}


//WAP to 
