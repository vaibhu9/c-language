#include<stdio.h>
#include<conio.h>
int main()
{
	int ang1,ang2,ang3;
	printf("Enter three angles :\n");
	scanf("%d%d%d",&ang1,&ang2,&ang3);
	if(ang1+ang2+ang3==180)
	{
		printf("\nThis triangle is valid");
	}
	else
	{
		printf("\nThis trianle is not valid");
	}
	return 0;
}
