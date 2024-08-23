//WAP to input number and print the following series.  or  same digit increasing by 1 digit.

#include<stdio.h>
int main()
{
	int n,t=1,i;
	
	printf("Enter number :\n");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%d\t",t);
		t=(t*10)+1;
		i++;
	}
	return 0;
}
