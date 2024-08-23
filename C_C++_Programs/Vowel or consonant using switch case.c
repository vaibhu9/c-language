/*
#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the character:\n");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a':printf("Vowel");
		break;
		case 'e':printf("Vowel");
		break;
		case 'i':printf("Vowel");
		break;
		case 'o':printf("Vowel");
		break;
		case 'u':printf("Vowel");
		break;
		default:printf("The character is consonant or numerical or special symbol");	
	}
}
*/

#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the character:\n");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("Vowel");
		break;
		default:printf("The character is consonant or numerical or special symbol");	
	}
}
