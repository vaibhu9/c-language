#include<stdio.h>
int main()
{
	int fc,sc;
	printf("Enter charges of first cab service\n");
	scanf("%d",&fc);
	printf("Enter charges of second cab service\n");
	scanf("%d",&sc);
	
	if(fc<sc)
	{
		printf("\nFirst");
		
	}
	else if(sc==fc)
	{
		printf("\nAny");
	}
	else
	{
		printf("\nSecond");
	}
	return 0;
}
