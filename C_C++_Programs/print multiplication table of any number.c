//program to print the multiplication table of any number.
//==========================================================
#include<stdio.h>
int main()
{
	int num,table,i=1;
	
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	while(i<=10)//5<=10
	{
		table=num*i; //5*1;
		printf("\n%d",table);
		i++;
	}
	return 0;
}
