//==========================================================================================================
//Q.26) WAP to enter a number and print it in words.
//==========================================================================================================


#include<stdio.h>
int rev=0;
int convertNum(int n)
{
	if(n!=0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		convertNum(n);
	}
	
	if(rev!=0)
	{
		int o=rev%10;
		rev=rev/10;	
		
		switch(o)
		{
			case 0:
				printf("Zero ");
				break;
			case 1:
				printf("One ");
				break;	
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
			
			default : printf("You entered wrong number.");						
		}
		convertNum(n);
	}
}

int main()
{
	int num,o;
	printf("Enter any number : ");
	scanf("%d",&num);
	convertNum(num);
	
	return 0;
}

