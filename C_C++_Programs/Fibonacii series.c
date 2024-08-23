//WAP to print fibonacii series.
#include<stdio.h>
int main()
{
	int f1=0,f2=1,fib,i,limit;
	
	printf("Enter the limit :\n");
	scanf("%d",&limit);
	
	printf("\n%d\t%d\t",f1,f2);
	
	i=1;
	while(i<limit)
	{
		fib=f1+f2;
		f1=f2;
		f2=fib;
		
		printf("%d\t",fib);
		
		i++;
	}
	return 0;
}
