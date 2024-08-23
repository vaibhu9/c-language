#include<stdio.h>
int main()
{
	int num,i=1,count=0;
	
	printf("Enter the number :\n");
	scanf("%d",&num);//6
	
	while(i<=num)//7<=6
	{
		if(num%i==0)//6%6==0
		{
			count++;//count=4
		}
		i++;//i=7
		
	}
	if(count==2)
	{
		printf("It is a prime number.");
	}
	else
	{
		printf("It is not prime number.");
	}
	return 0;
}
