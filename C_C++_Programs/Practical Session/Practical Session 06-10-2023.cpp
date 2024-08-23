///////////// Practical Session 06-10-2023 ////////////////
//================================================================================================================
//Q.1) Create the class name as salary with a following constructor and methods.
//The major purpose of this program is calculate the salary of employee as per his present days using a constructor.
//================================================================================================================

/*
#include<iostream>
#include<string.h>
using namespace std;

class Salary
{
	private:
		char name[90],contact[11];
		int id,preday,perdsal,totalsal;
		
	public:
		Salary(char name[90],int id,char contact[11],int preday,int perdsal)
		{
			strcpy(this->name,name);
			this->id=id;
			strcpy(this->contact,contact);
			this->preday=preday;
			this->perdsal=perdsal;
		}
		
		void calculateSalary()
		{
			totalsal=preday*perdsal;
		}
		
		void show()
		{
			cout<<"\n\nName : "<<name<<"\nId : "<<id<<"\nContact : "<<contact<<"\nTotal salary : "<<totalsal;
		}
};

int main()
{
	char name[90],contact[11];
	int id,preday,perdsal;
	
	cout<<"\nEnter name,id,contact,present days, perday salary :\n";
	cin>>name>>id>>contact>>preday>>perdsal;
	Salary s(name,id,contact,preday,perdsal);
	s.calculateSalary();
	s.show();
	
	return 0;
}
*/

//================================================================================================================
//Q.2) WAP to occurance string using a contructor
//================================================================================================================

/*
#include<iostream>
#include<string.h>
using namespace std;

class Occurance
{
	private:
		char str[90];
		int len;
		
	public:
		Occurance(char str[90])
		{
			strupr(str);
			strcpy(this->str,str);
			len=strlen(str);
		}
		
		void beforeOccurance()
		{
			for(int i=0;i<len;i++)
			{
				for(int j=0;j<len;j++)
				{
					if(str[i]<str[j])
					{
						char temp=str[i];
						str[i]=str[j];
						str[j]=temp;
					}
				}
			}
		}
		
		void afterOccurance()
		{
			int count=1;
			for(int i=0;i<len;i++)
			{
				if(str[i]==str[i+1])
				{
					count++;
				}
				else
				{
					cout<<str[i]<<" is repeated "<<count<<" times.\n";
					count=1;
				}
			}
		}
};

int main()
{
	char str[90];
	
	cout<<"Enter the string : ";
	cin>>str;
	
	Occurance o(str);
	o.beforeOccurance();
	o.afterOccurance();
	
	return 0;
}
*/

