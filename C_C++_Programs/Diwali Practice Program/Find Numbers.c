//Q.) WAP in C to create menu driven for following cases:
// Create a special function for each case
// All cases for 1 to n... programs
// case 1: Armstrong numbers
// case 2: Duck numbers
// case 3: Neon numbers
// case 4: Palindrome numbers
// case 5: Perfect numbers
// case 6: Prime numbers
// case 7: Strong numbers
// case e: Exit
//======================================================================================================

#include<stdio.h>

void findArmstrong();
void findDuck();
void findNeon();
void findPalindrome();
void findPerfect();
void findPrime();
void findStrong();
void exit();

int main()
{
	char choice;
	
	do
	{
		printf("\n\n\n1) Find Armstrong Numbers");
		printf("\n2) Find Duck Numbers");
		printf("\n3) Find Neon Numbers");
		printf("\n4) Find Palindrome Numbers");
		printf("\n5) Find Perfect Numbers");
		printf("\n6) Find Prime Numbers");
		printf("\n7) Find Strong Numbers");
		printf("\ne) Exit");
		printf("\n\nEnter your choice : ");
		scanf("%c",&choice);
		switch(choice)
		{
			case '1':
					findArmstrong();
					
				break;
				
			case '2':
					findDuck();
					
				break;
				
			case '3':
					findNeon();
					
				break;
				
			case '4':
					findPalindrome();
					
				break;
				
			case '5':
					findPerfect();
					
				break;
				
			case '6':
					findPrime();
					
				break;
				
			case '7':
					findStrong();
					
				break;
				
			case 'e':
						exit();
				
			default: printf("\nSorry !!!\n You have entered wrong choice...");
		}
	}while(choice!='e');
}

void findArmstrong()
{
	int limit,n,temp,digits,sum,rem,power,i;
	
	printf("\nEnter the limit to print all Armstrong numbers : ");
	scanf("%d",&limit);
	printf("\nAll Armstrong numbers upto %d are : ",limit);
	
	for(n=1;n<=limit;n++)
	{
		temp=n;
		digits=0;
		while(temp!=0)
		{
			digits++;
			temp=temp/10;
		}
		temp=n;
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			power=1;
			for(i=1;i<=digits;i++)
			{
				power=power*rem;
			}
			sum=sum+power;
		}
		if(sum==n)
		{
			printf("%d  ",n);
		}
	}
}


void findDuck()
{
	int limit,n,temp,rem;
	
	printf("\nEnter the limit to print all Duck numbers : ");
	scanf("%d",&limit);
	printf("\nAll Duck numbers upto %d are : ",limit);
	
	for(n=1;n<=limit;n++)
	{
		temp=n;
		while(temp!=0)
		{
			rem=temp%10;
			if(rem==0)
			{
				printf("%d  ",n);
				break;
			}
			temp=temp/10;
		}
	}
}


void findNeon()
{
	int limit,n,square,sum,rem;
	
	printf("\nEnter the limit to print all Neon numbers : ");
	scanf("%d",&limit);
	printf("\nAll Neon numbers upto %d are : ",limit);
	
	for(n=1;n<=limit;n++)
	{
		square=n*n;
		sum=0;
		while(square!=0)
		{
			rem=square%10;
			square=square/10;
			sum=sum+rem;
		}
		if(sum==n)
		{
			printf("%d  ",n);
		}
	}
}


void findPalindrome()
{
	int limit,n,temp,rev,rem;
	
	printf("\nEnter the limit to print all Palindrome numbers : ");
	scanf("%d",&limit);
	printf("\nAll Palindrome numbers upto %d are : ",limit);
	
	for(n=1;n<=limit;n++)
	{
		temp=n;
		rev=0;
		while(temp!=0)
		{
			rem=temp%10;
			temp=temp/10;
			rev=rev*10+rem;
		}
		if(rev==n)
		{
			printf("%d  ",n);
		}
	}
}


void findPerfect()
{
	int limit,n,sum,d;
	
	printf("\nEnter the limit to print all Perfect numbers : ");
	scanf("%d",&limit);
	printf("\nAll Perfect numbers upto %d are : ",limit);
	
	for(n=1;n<=limit;n++)
	{
		sum=0;
		for(d=1;d<=n/2;d++)
		{
			if(n%d==0)
			{
				sum=sum+d;
			}
		}
		if(sum==n)
		{
			printf("%d  ",n);
		}
	}
}


void findPrime()
{
	int limit,n,count,d;
	
	printf("\nEnter the limit to print all Prime numbers : ");
	scanf("%d",&limit);
	printf("\nAll Prime numbers upto %d are : ",limit);
	
	for(n=1;n<=limit;n++)
	{
		count=0;
		for(d=1;d<=n;d++)
		{
			if(n%d==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d  ",n);
		}
	}
}


void findStrong()
{
	int limit,n,temp,sum,rem,factorial,i;
	
	printf("\nEnter the limit to print all Strong numbers : ");
	scanf("%d",&limit);
	printf("\nAll Strong numbers upto %d are : ",limit);
	
	for(n=1;n<=limit;n++)
	{
		temp=n;
		sum=0;
		while(temp!=0)
		{
			rem=temp%10;
			factorial=1;
			for(i=1;i<=rem;i++)
			{
				factorial=factorial*i;
			}
			sum=sum+factorial;
			temp=temp/10;
		}
		if(sum==n)
		{
			printf("%d  ",n);
		}
	}
}

