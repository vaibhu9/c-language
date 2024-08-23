////////////Practical Session- 02-09-2023////////////
//==========================================================================================================
//Q.1) WAP to find the length in string.
//==========================================================================================================

/*
#include<stdio.h>

int i=0;
int countStringLen(char a[])
{
	if(a[i]!='\0')
	{
		i++;
		return countStringLen(a);
	}
	else
	{
		return i;
	}
}

int main()
{
	char a[90],len;
	printf("Enter the string : ");
	gets(a);
	printf("\nYour given string is :\n%s",a);
	len=countStringLen(a);
	printf("\nLength of your string is %d",len);
	
	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char a[90],len;
	printf("Enter the string : ");
	gets(a);
	printf("\nYour given string is :\n%s",a);
	len=strlen(a);
	printf("\nLength of your string is %d",len);
	
	return 0;
}
*/

//==========================================================================================================
//Q.2) WAP to count vowel and consonent in string.
//==========================================================================================================

/*
#include<stdio.h>
int i=0,v=0,c=0;
int countVowelCons(char a[])
{
	if(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			v++;
		}
		else
		{
			c++;
		}
		i++;
//		countVowelCons(a);
		return countVowelCons(a);
	}
//	else
//	{
		printf("\nIn your string Vowel is %d\nand\nConsonent is %d",v,c);
//	}
}

int main()
{
	char a[90];
	printf("Enter string : ");
	gets(a);
	countVowelCons(a);
	
	return 0;
}
*/

//==========================================================================================================
//Q.3) WAP to string convert the lowercase to uppercase.
//==========================================================================================================

/*
#include<stdio.h>
int i=0;
int convertinUpp(char a[])
{
	if(a[i]!=0)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		i++;
		convertinUpp(a);
	}
}

int main()
{
	char a[90];
	printf("Enter your string : ");
	gets(a);
	printf("\nYour given string is : %s",a);
	convertinUpp(a);
	printf("\nAfter converting in uppercase : %s",a);
	
	return 0;
}
*/

//==========================================================================================================
//Q.4) WAP to reverse string.
//==========================================================================================================

/*
#include<stdio.h>
#include<string.h>
int i=0;
int revString(char a[],int len)
{
	if(i<len/2)
	{
		int temp=a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=temp;
		
		i++;
		revString(a,len);
	}
}

int main()
{
	char a[90];
	int len;
	printf("Enter the string : ");
	gets(a);

	printf("\nYour given string is : %s",a);
	
	len=strlen(a);
	revString(a,len);
	
	
	
	printf("\nAfter reversing string : %s",a);
	
	return 0;
}
*/

//==========================================================================================================
//Q.5) WAP to check whether string is palindrome.
//==========================================================================================================

/*
#include<stdio.h>
#include<string.h>
int i=0,flag=1;
int checkPalindrome(char a[],int len)
{
	if(i<=len/2)
	{
		if(a[i]!=a[len-1-i])
		{
			flag=0;
		}
		i++;
		return checkPalindrome(a,len);
	}
	(flag)?printf("\nGiven String is palindrome."):printf("\nGiven String is not palindrome.");
}

int main()
{
	char a[90];
	int len,flag=1;
	printf("Enter the string : ");
	gets(a);

	printf("\nYour given string is : %s\n",a);
	
	len=strlen(a);
	checkPalindrome(a,len);
	
	return 0;
}
*/

