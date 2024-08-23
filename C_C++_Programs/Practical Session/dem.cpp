/////////////////////////////////////////////////////////////////////////////////////
// PROGRAM FOR CONVERT SENTENCE TO ASCII CODE
/////////////////////////////////////////////////////////////////////////////////////

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char myfeelings[100];
	int i=0;

	printf("Enter your feelings :");
	gets(myfeelings);

	while(myfeelings[i]!='\0')
	{
		printf("%d",myfeelings[i]);
		i++;
	}

	return 0;
}
*/


////////////////////////////////////////////////////////////////////////////////////////
// PROGRAM FOR CONVERT ASCII TO SENTENCE
////////////////////////////////////////////////////////////////////////////////////////
// C++ implementation of the approach
#include <bits/stdc++.h>
/*#include<stdio.h>
#include<string.h>
*/
using namespace std;

// Function to print the character sequence
// for the given ASCII sentence
void asciiToSentence(string str, int len)
{
	int num = 0;
	for (int i = 0; i < len; i++) {

		// Append the current digit
		num = num * 10 + (str[i] - '0');

		// If num is within the required range
		if (num >= 32 && num <= 122) {

			// Convert num to char
			char ch = (char)num;
			cout << ch;

			// Reset num to 0
			num = 0;
		}
	}
}

// Driver code
int main()
{
	string str = "7273328665738372786586733273327679866932897985";
	int len = str.length();
	asciiToSentence(str, len);

	return 0;
}

