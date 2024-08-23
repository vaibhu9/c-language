#include<stdio.h>
int main()
{
	int a;
	
	printf("Enter the number:\n");
	scanf("%d",&a);
	
	switch (a%2==0)
	{
		case 1:printf("\n%d is Even number",a);
		break;
		/*case 0:printf("\n%d is Odd number",a);
		break;*/
		default:printf("\n%d is Odd number",a);
	}
}
