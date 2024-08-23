////////////////////////Practical Session 22-09-2023 //////////////////////
//==================================================================================================================
//Q.1) WAP int cpp to perform following operation using fuction.
//1.Check whether a number is palindrome or not.
//2.also create same function with different parameter ( fuction overloading ) to check a string is palindrome or not.
//==================================================================================================================

/*
#include<string.h>
#include<iostream>

using namespace std;

int isPalindrome(int no)
{
	int temp=no;
	int rev=0;
	while(temp!=0)
	{
		int r=temp%10;
		rev= rev*10+r;
		temp=temp/10;
		 				
	}
	if(rev==no)
	{
		cout<<"\nGiven number is palindrome.";
	}
	else
	{
		cout<<"\nGiven number is not palindrome.";
	}
	
}

void isPalindrome(char ch[])
{
	char temp[20];
	
	strcpy (temp,ch);
	strrev (temp);
	
	if(strcmp(temp,ch)==0)
	{
		cout<<"\nGiven string is palindrome.";
	}
	else
	{
		cout<<"\nGiven string is not palindrome.";
	}
}

int main()
{
	int n;
	char ch[20];
	
	cout<<"\nEnter a number : ";
	cin>>n;
	
	isPalindrome(n);	
	
	cout<<"\n\n";
	
	cout<<"\nEnter the string : ";
	cin>>ch;
	
	isPalindrome(ch);
	
	return 0;
}
*/

//=================================================================================================================
//Q.2) WAP in cpp to perform following operations on array.
//case 1- Insert element at specific index.
//case 2- Delete element at specific index.
//case 3- Rotate array at specific index.
//case 4- Reverse array.
//Use function for each case.
//=================================================================================================================


#include<iostream>
using namespace std;


void insertElement(int a[],int len,int value,int index)
{
	int i;
	for(i=len-1;i>index;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=value;
	
	cout<<"\nAfter inserting value : ";
	for(i=0;i<len;i++)
	{
		cout<<a[i];
	}
}


void deletElement(int a[],int len,int index)
{
	int i;
	for(i=index;i<len;i++)
	{
		a[i]=a[i+1];
	}
	
	cout<<"\n\nAfter deleting value : ";
	for(i=0;i<len-1;i++)
	{
		cout<<a[i];
	}
}


void rotateArray(int a[],int len,int index)
{
	int i;
	for(i=0;i<index;i++)
	{
		int temp=a[0];
		for(int j=0;j<len-1;j++)
		{
			a[j]=a[j+1];
		}
		a[len-1]=temp;
	}
	
	cout<<"\n\nAfter rotating array : ";
	for(i=0;i<len;i++)
	{
		cout<<a[i];
	}
}


void revArray(int a[],int len)
{
	int i,mid=len/2;
	for(i=0;i<=mid;i++)
	{
		int temp=a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=temp;
	}
	
	cout<<"\n\nAfter reverse array : ";
	for(i=0;i<len;i++)
	{
		cout<<a[i];
	}
}


int main()
{
	int a[6],v,p,i;
	int len=sizeof(a)/sizeof(a[0]);
	int ch;
	
	cout<<"Enter elements in array :\n";
	for(i=0;i<len-1;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nGiven array is : ";
	for(i=0;i<len-1;i++)
	{
		cout<<a[i];
	}
	
	do
	{
		cout<<"\n\ncase 1- Insert element at specific index.\ncase 2- Delete element at specific index.\ncase 3- Rotate array at specific index.\ncase 4- Reverse array.";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
	
		switch(ch)
		{
			case 1:
					cout<<"\n\nEnter index and value :\n";
					cin>>p>>v;
	
					insertElement(a,len,v,p);
	
				break;
			case 2:
					cout<<"\n\nEnter index to delete :\n";
					cin>>p;
	
					deletElement(a,len,p);
			
				break;
			case 3:
					cout<<"\n\nEnter index : ";
					cin>>p;
				
					rotateArray(a,len,p);
				break;
			case 4:
					revArray(a,len);
				break;
			default : cout<<"\nPlease enter valid choice.";
		}
	}while(ch<=4);
	
	return 0;
}
