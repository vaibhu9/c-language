/////////////// Practical Session 16-10-2023 ///////////////
//=========================================================================================================================
//Q.1) WAP to check whether a number is magic number or not. 
//=========================================================================================================================

/*
#include<iostream>
using namespace std;

class Number
{
	protected:
		int num;
		
	public:
		virtual void setNumber(int num)=0;
		virtual void isNum()=0;
};

class Magic : public Number
{
	public:
		void setNumber(int num)
		{
			this->num=num;
		}
		
		void isNum()
		{
			int temp=num;
			int sum=0;
			while(temp!=0)
			{
				int rem=temp%10;
				temp=temp/10;
				sum=sum+rem;
			}
			
			int temp2=sum;
			int rev=0;
			while(temp2!=0)
			{
				int rem=temp2%10;
				temp2=temp2/10;
				rev=rev*10+rem;
			}
			
			int mn=rev*sum;
			if(num==mn)
			{
				cout<<"\nGiven number is a magic number.";
			}
			else
			{
				cout<<"\nGiven number is not a magic number.";
			}
		}
};

class Neon : public Number
{
	public:
		void setNumber(int num)
		{
			this->num=num;
		}
		
		void isNum()
		{
			int sqr=num*num;
			int sum=0;
			
			while(sqr!=0)
			{
				int rem=sqr%10;
				sqr=sqr/10;
				sum=sum+rem;
			}
			if(sum==num)
			{
				cout<<"\nGiven number is a Neon number.";
			}
			else
			{
				cout<<"\nGiven number is not a Neon number.";
			}
		}
};

int main()
{
	int num;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	Magic m;
	m.setNumber(num);
	m.isNum();
	
	Neon n;
	n.setNumber(num);
	n.isNum();
	
	return 0;
}
*/

//=========================================================================================================================

//=========================================================================================================================

