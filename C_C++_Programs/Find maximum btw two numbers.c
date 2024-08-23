#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter two integer :\n");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
	    printf("\n%d is maximum than %d",a,b);
	}
	else
	{    
	    printf("\n%d is maximum than %d",b,a);
	}
	return 0;
}
