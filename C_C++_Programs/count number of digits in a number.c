#include<stdio.h>
int main()
{
	long long num,digits=0;
	
	printf("Enter the number :\n");
	scanf("%lld",&num);//
	
	while(num!=0)
	{
	
		digits++;
		
		num=num/10;
	}
	
	printf("\nNumber of digits is : %lld",digits);
	return 0;
}
