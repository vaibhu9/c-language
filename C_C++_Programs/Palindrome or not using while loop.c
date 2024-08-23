#include<stdio.h>
int main()
{
	int n,r,rn=0;
	
	printf("Enter the number :\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rn=rn*10+r;
	}
	if(n==rn)
	{
		printf("\n%d it is a Palindrome number.",rn);
	}
	else
	{
		printf("\n%d it is Not Palindrome number.",rn);
	}
	return 0;
}
