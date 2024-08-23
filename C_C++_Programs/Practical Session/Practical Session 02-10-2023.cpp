///////////// Practical Session 02-10-2023 //////////////
//============================================================================================================================
//Q.1) WAP to check string is palindrome and number is palindrome.
//		void checkPalindrome(char ch[]);
//		void checkPalindrome(int no);
//============================================================================================================================

/*
#include<iostream>
#include<string.h>
using namespace std;

class Palindrome
{
	public:
		void checkPalindrome(char ch[]);
		int checkPalindrome(int no);
};


int Palindrome::checkPalindrome(int no)
{
	int temp,rev=0;
	temp=no;
	
	while(temp!=0)
	{
		int rem=temp%10;
		temp=temp/10;
		rev=rev*10+rem;
	}
	
	if(rev==no)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void Palindrome::checkPalindrome(char ch[])
{
	char temp[90];
	
	strcpy(temp,ch);
	strrev(temp);
	if(strcmp(temp,ch)==0)
	{
		cout<<"\nGiven string is Palindrome.";
	}
	else
	{
		cout<<"\nGiven string is Not Palindrome.";
	}
}


int main()
{
	int n;
	char ch[90];
		
	cout<<"\nEnter a number to check palindrome or not : ";
	cin>>n;
	
	Palindrome p;
	int flag=p.checkPalindrome(n);
	
	if(flag)
	{
		cout<<"\nGiven number is Palindrome.";
	}
	else
	{
		cout<<"\nGiven number is Not Palindrome.";
	}

	cout<<"\n\n\nEnter a string to check palindrome or not : ";
	cin>>ch;
	p.checkPalindrome(ch);
		
	return 0;
}
*/

//============================================================================================================================
//Q.2) WAP to reverse of string and Array elements.
//		void reverse(char ch[]);
//		int reverse(int a[]);
//============================================================================================================================

/*
#include<iostream>
#include<string.h>
using namespace std;

void reverse(char ch[])
{
	int len=strlen(ch);
	for(int i=0;i<=len/2;i++)
	{
		int temp=ch[i];
		ch[i]=ch[len-1-i];
		ch[len-1-i]=temp;
	}
	
	cout<<"\nAfter reverse string is : "<<ch;
}

int *reverse(int a[],int len)
{
	int *ptr=a;
	for(int i=0;i<=len/2;i++)
	{
		int temp=a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=temp;
	}
	
	return ptr;
}


int main()
{
	char ch[90];
	cout<<"\nEnter a string : ";
	cin>>ch;
	
	reverse(ch);
	
	int a[6],len,i;
	len=sizeof(a)/sizeof(a[0]);
	
	cout<<"\n\n\nEnter elements in array :\n";
	for(i=0;i<len;i++)
	{
		cin>>a[i];
	}
	
	int *p=reverse(a,len);
	
	cout<<"After reverse array : ";
	for(i=0;i<len;i++)
	{
		cout<<p[i];
	}
	
	return 0;
}
*/

//============================================================================================================================
//Q.3) WAP to find area of square, rectangle, circle and triangle.
//		void isArea();
//============================================================================================================================

/*
#include<iostream>
using namespace std;

void area(int side)
{
	cout<<"Area of square is : "<<side*side;
}

void area(int l,int b)
{
	cout<<"Area of rectangle is : "<<l*b;
}

void area(int r,float pi)
{
	cout<<"Area of circle is : "<<pi*r*r;
}

void area(float b,float h)
{
	cout<<"Area of triangle is : "<<b*h*0.5;
}


int main()
{
	int side;
	cout<<"\n\nEnter side of square : ";
	cin>>side;
	area(side);
	
	int l,b;
	cout<<"\n\nEntr length and breadth of rectangle : ";
	cin>>l>>b;
	area(l,b);
	
	int r;
	float pi=3.14;
	cout<<"\n\nEnter radius of circle : ";
	cin>>r;
	area(r,pi);
	
	float base,h;
	cout<<"\n\nEnter base and height of triangle : ";
	cin>>base>>h;
	area(base,h);
	
	return 0;
}
*/

