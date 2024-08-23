#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter the character :\n");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("\nThe character is uppercase");
	}
	else
	{
		printf("\nThe character is lowercase");
	}
	return 0;
}
