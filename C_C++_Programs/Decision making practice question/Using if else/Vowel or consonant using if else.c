#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the character :\n");
	scanf("%c",&ch);
	
	if(!isalpha(ch))
	{
		printf("\n%c That character is non-alphabetic or It may be a numeric value or It may be special symbol",ch);
	}
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
		printf("\n%c That character is vowel",ch);
	}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n%c That character is vowel",ch);
	}
	else
	{
		printf("\n%c That character is consonant",ch);
	}
}
