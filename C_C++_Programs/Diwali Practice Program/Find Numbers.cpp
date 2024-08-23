//Q.) WAP in C++ to create menu driven for following cases:
// Create a class name as FindNumbers
// Write a method for each case
// All cases for 1 to n... programs
// case 1: Armstrong numbers
// case 2: Duck numbers
// case 3: Neon numbers
// case 4: Palindrome numbers
// case 5: Perfect numbers
// case 6: Prime numbers
// case 7: Strong numbers
// case e: Exit
//======================================================================================================

#include<iostream>
using namespace std;

class FindNumbers
{
	public:
		void findArmstrong()
		{
			int limit,n,temp,digits,sum,rem,power,i;
	
			cout<<"\nEnter the limit to print all Armstrong numbers : ";
			cin>>limit;
			cout<<"\nAll Armstrong numbers upto "<<limit<<" are : ";
	
			for(n=1;n<=limit;n++)
			{
				temp=n;
				digits=0;
				while(temp!=0)
				{
					digits++;
					temp=temp/10;
				}
				temp=n;
				sum=0;
				while(temp!=0)
				{
					rem=temp%10;
					temp=temp/10;
					power=1;
					for(i=1;i<=digits;i++)
					{
						power=power*rem;
					}
					sum=sum+power;
				}
				if(sum==n)
				{
					cout<<n<<"  ";
				}
			}
		}
		
		void findDuck()
		{
			int limit,n,temp,rem;
	
			cout<<"\nEnter the limit to print all Duck numbers : ";
			cin>>limit;
			cout<<"\nAll Duck numbers upto "<<limit<<" are : ";
	
			for(n=1;n<=limit;n++)
			{
				temp=n;
				while(temp!=0)
				{
					rem=temp%10;
					if(rem==0)
					{
						cout<<n<<"  ";
						break;
					}
					temp=temp/10;
				}
			}
		}
		
		void findNeon()
		{
			int limit,n,square,sum,rem;
	
			cout<<"\nEnter the limit to print all Neon numbers : ";
			cin>>limit;
			cout<<"\nAll Neon numbers upto "<<limit<<" are : ";
	
			for(n=1;n<=limit;n++)
			{
				square=n*n;
				sum=0;
				while(square!=0)
				{
					rem=square%10;
					square=square/10;
					sum=sum+rem;
				}
				if(sum==n)
				{
					cout<<n<<"  ";
				}
			}
		}
		
		void findPalindrome()
		{
			int limit,n,temp,rev,rem;
	
			cout<<"\nEnter the limit to print all Palindrome numbers : ";
			cin>>limit;
			cout<<"\nAll Palindrome numbers upto "<<limit<<" are : ";
	
			for(n=1;n<=limit;n++)
			{
				temp=n;
				rev=0;
				while(temp!=0)
				{
					rem=temp%10;
					temp=temp/10;
					rev=rev*10+rem;
				}
				if(rev==n)
				{
					cout<<n<<"  ";
				}
			}
		}
		
		void findPerfect()
		{
			int limit,n,sum,d;
	
			cout<<"\nEnter the limit to print all Perfect numbers : ";
			cin>>limit;
			cout<<"\nAll Perfect numbers upto "<<limit<<" are : ";
	
			for(n=1;n<=limit;n++)
			{
				sum=0;
				for(d=1;d<=n/2;d++)
				{
					if(n%d==0)
					{
						sum=sum+d;
					}
				}
				if(sum==n)
				{
					cout<<n<<"  ";
				}
			}
		}
		
		void findPrime()
		{
			int limit,n,count,d;
	
			cout<<"\nEnter the limit to print all Prime numbers : ";
			cin>>limit;
			cout<<"\nAll Prime numbers upto "<<limit<<" are : ";
	
			for(n=1;n<=limit;n++)
			{
				count=0;
				for(d=1;d<=n;d++)
				{
					if(n%d==0)
					{
						count++;
					}
				}
				if(count==2)
				{
					cout<<n<<"  ";
				}
			}
		}
		
		void findStrong()
		{
			int limit,n,temp,sum,rem,factorial,i;
	
			cout<<"\nEnter the limit to print all Strong numbers : ";
			cin>>limit;
			cout<<"\nAll Strong numbers upto "<<limit<<" are : ";
	
			for(n=1;n<=limit;n++)
			{
				temp=n;
				sum=0;
				while(temp!=0)
				{
					rem=temp%10;
					factorial=1;
					for(i=1;i<=rem;i++)
					{
						factorial=factorial*i;
					}
					sum=sum+factorial;
					temp=temp/10;
				}
				if(sum==n)
				{
					cout<<n<<"  ";
				}
			}
		}
		
		void exit();
};

int main()
{
	char choice;
	FindNumbers f;
	
	do
	{
		cout<<"\n\n1) Armstrong numbers";
		cout<<"\n2) Duck numbers";
		cout<<"\n3) Neon numbers";
		cout<<"\n4) Palindrome numbers";
		cout<<"\n5) Perfect numbers";
		cout<<"\n6) Prime numbers";
		cout<<"\n7) Strong numbers";
		cout<<"\ne) Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case '1':
						f.findArmstrong();
				break;
				
			case '2':
						f.findDuck();
				break;
				
			case '3':
						f.findNeon();
				break;
				
			case '4':
						f.findPalindrome();
				break;
				
			case '5':
						f.findPerfect();
				break;
				
			case '6':
						f.findPrime();
				break;
				
			case '7':
						f.findStrong();
				break;
				
			case 'e':
						exit(0);
						
			default: cout<<"\nSorry !!!\nYou have entered wrong choice...";
		}
	}while(choice!='e');
}
