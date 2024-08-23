/////////////Practical Session 04-10-2023 //////////////////
//==============================================================================================================
//Q.1) WAP to create class name as FindRepeatDigitCount with one parameterized constructor and two methods.
//==============================================================================================================

/*
#include<iostream>
using namespace std;

class FindRepeatDigitCount
{
	private:
		int no,digit;
	
	public:
		FindRepeatDigitCount(int no)
		{
			this->no=no;
		}
		
		void findRepeatDigit()
		{
			int i,j,count,rem;
			cout<<"\nRepetitive digits are = ";
			for(i=0;i<10;i++)
			{
				count=0;
				for(j=no;j!=0;j=j/10)
				{
					rem=j%10;
					if(rem==i)
					{
						count++;
					}
				}
				if(count>1)
				{
					digit=i;
					show();
				}
			}
		}
		
		void show()
		{
			cout<<digit;
		}
};


int main()
{
	int no;
	cout<<"\nEnter the number : ";
	cin>>no;
	
	FindRepeatDigitCount f(no);
	f.findRepeatDigit();
	
	return 0;
}
*/

//==============================================================================================================
//Q.2) WAP to create class CharOperation with one constructor and one method.
//==============================================================================================================


#include<iostream>
#include<string.h>
using namespace std;

class CharOperation
{
	private:
		char str[5][90];
	
	public:
		CharOperation(char str[5][90])
		{
			strcpy(this->str,str);
		}
		
		void performOperation()
		{
			
		}
};


int main()
{
	char str[5][90];
	cout<<"\nEnter multiple lines string :\n";
	for(int i=0;i<5;i++)
	{
		cin>>str[i];
	}
	
	CharOperation c(str);
//	for(int i=0;i<5;i++)
//	{
//		cout<<str[i]<<"\n";
//	}
	
	return 0;
}



