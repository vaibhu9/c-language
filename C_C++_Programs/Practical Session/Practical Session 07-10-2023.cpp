///////////////// Practical Session 07-10-2023 //////////////////
//================================================================================================================
//Q.1) WAP to create a class MajorityElement and create a constructor to set the values and another fuction to
//checkmajority or not.
//================================================================================================================

/*
#include<iostream>
using namespace std;

class MajorityElement
{
	private:
		int *ptr;
		
	public:
		MajorityElement(int a[])
		{
			ptr=a;
		}
		
		int checkMajority()
		{
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
			}
			
			int count=1;
			for(int i=0;i<6;i++)
			{
				if(ptr[i]==ptr[i+1])
				{
					count++;
					if(count>(6/2))
					{
						return ptr[i];
						break;
					}
				}
				else
				{
					count=1;
				}
			}
			return 0;
		}
};

int main()
{
	int a[6],result=0;
	
	cout<<"Enter elements in array :\n";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	
	MajorityElement m(a);
	result=m.checkMajority();
	
	if(result)
	{
		cout<<"\nMajority element is : "<<result;
	}
	else
	{
		cout<<"\nNo majority element is present.";
	}
	
	return 0;
}
*/

//================================================================================================================
//Q.2) Write a C program to create the constructor overloading. Write three constructors in class. 
//In First constructor pass two parameter of type int, in second constructor pass two parameter of type float 
//and in third constructor pass string parameter. In first two constructor perform of two number 
//and in third constructor convert lower case to upper case without using inbuilt function.
//================================================================================================================

////////// wrong question /////////////

//================================================================================================================
//Q.3) WAP to create a class name as StringClass with parameterised constructor.
//================================================================================================================

/*
#include<iostream>
using namespace std;

class StringClass
{
	private:
		int *ptr1;
		char *ptr;
		
	public:
		StringClass(char str[],int a[])
		{
			ptr=str;
			ptr1=a;
		}
		
		int isPalindrome()
		{
			for(int i=0;i<6;i++)
			{
				if(ptr1[i]!=ptr1[6-1-i])
				{
					return 0;
				}
			}
			return 1;
		}
		
		void stringReverse()
		{
			int len=0;
			while(ptr[len]!='\0')
			{
				len++;
			}
			
			for(int i=0;i<=len/2;i++)
			{
				int temp=ptr[i];
				ptr[i]=ptr[len-1-i];
				ptr[len-1-i]=temp;
			}
		}
		
		void disply()
		{
			cout<<"\nAfter reversing string : "<<ptr;
		}
};

int main()
{
	int a[6];
	char ch[90];
	
	cout<<"Enter elements in array :\n";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n\nEnter a string : ";
	cin>>ch;
	
	StringClass s(ch,a);
	int result=s.isPalindrome();
	if(result)
	{
		cout<<"\nGiven array is palindrome.\n";
	}
	else
	{
		cout<<"\nGiven array is not palindrome.\n";
	}
	s.stringReverse();
	s.disply();
	
	return 0;
}
*/

