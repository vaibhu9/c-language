//------------------------------------------------------------------------------------
//***Topic name:- While Loop statement***///
//------------------------------------------------------------------------------------

//program to print "Hello Vaibhav" 10 times.
//---------------------------------------------
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
//-----------------------------------------------------------

/*#include<stdio.h>
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
//-------------------------------------------------

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

//WAP to print even number only.
/*
#include<stdio.h>
int main()
{
	int start=1,num;
	
	printf("Enter ther number :\n");
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


//WAP to print sum of all number.

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
	printf("Sum of all number is : %d",sum);
	return 0;
}

