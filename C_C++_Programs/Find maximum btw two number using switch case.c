#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	
	switch (a>b)//3>5==0
	{
		case 1:printf("\n%d is greater",a);
        break;
	/*	case 0:printf("\n%d is greatar",b);
		break;*/
		default:printf("\n%d is greater",b);
	}
	return 0;
}
