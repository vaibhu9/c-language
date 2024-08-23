//////////Practical Session 05-10-2023 ///////////////
//================================================================================================================
//Q.1) WAP to perform constructor overloading for array create class name as TestArr with two constructor.
//================================================================================================================

/*
#include<iostream>
using namespace std;

class TestArr
{
	private:
		int *ptr;
	public:
		TestArr(int a[])
		{
			ptr=a;
			cout<<"After aaranging all element in ascending order : ";
			for(int i=0;i<6;i++)
			{
				for(int j=i+1;j<6;j++)
				{
					if(ptr[i]>ptr[j])
					{
						int temp=ptr[i];
						ptr[i]=ptr[j];
						ptr[j]=temp;
					}
				}
				cout<<ptr[i]<<" ";
			}
		}
		
		TestArr(int a[],int key)
		{
			int flag=0;
			for(int i=0;i<6;i++)
			{
				if(a[i]==key)
				{
					flag=1;
					break;
				}
			}
			if(flag)
			{
				cout<<"\nValue found.";
			}
			else
			{
				cout<<"\nValue not found.";
			}
		}
	
};


int main()
{
	int a[6],key;
	int len=sizeof(a)/sizeof(a[0]);
	cout<<"Enter element in array :\n";
	
	for(int i=0;i<len;i++)
	{
		cin>>a[i];
	}
	
	TestArr t(a);
	
	cout<<"\n\nEnter search key : ";
	cin>>key;
	TestArr (a,key);
	
	return 0;
}
*/

//================================================================================================================
//Q.2) WAP to perform constructor overloading class name as CharArr.
//================================================================================================================

/*
#include<iostream>
#include<string.h>
using namespace std;


class CharArr
{
	public:
		CharArr(char ch[])
		{
			cout<<"\nAfter converting in lowercase : ";
			int i=0;
			while(ch[i]!='\0')
			{
				if(ch[i]>=65&&ch[i]<=90)
				{
					ch[i]=ch[i]+32;
				}
				cout<<ch[i++];
			}
		}
		
		CharArr(char ch[],char count)
		{
			int i=0;
			int flag=0;
			while(ch[i]!='\0')
			{
				if(ch[i]==count)
				{
					flag=1;
					break;
				}
				i++;
			}
			if(flag)
			{
				cout<<"\nValue found.";
			}
			else
			{
				cout<<"\nValue not found.";
			}
		}
		
};


int main()
{
	char ch[90];
	char key;
	
	cout<<"Enter a string : ";
	cin>>ch;
	
	CharArr c(ch);
	
	cout<<"\n\nEnter a number : ";
	cin>>key;
	CharArr (ch,key);
	
	return 0;
}
*/


