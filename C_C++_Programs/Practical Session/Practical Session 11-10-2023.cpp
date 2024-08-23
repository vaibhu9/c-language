/////////////// Practical Session 11-10-2023 //////////////
//========================================================================================================================
//Q.1) Write a program to create a class name as person with proper member variable and following functions/methods.
//========================================================================================================================

/*
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
	protected:
		char name[90],adhar[90],mob[90];
		
	public:
		Person(char name[],char adhar[],char mob[])
		{
			strcpy(this->name,name);
			strcpy(this->adhar,adhar);
			strcpy(this->mob,mob);
		}
		
		void display()
		{
			cout<<"\nPerson Details :\n";
			cout<<name<<"\n"<<adhar<<"\n"<<mob<<"\n";
		}
};

class Employee:public Person
{
	private:
		int empid;
		char dept[90];
		long int sal;
		
	public:
		Employee(int empid,char name[],char dept[],long int sal,char adhar[],char mob[]):Person(name,adhar,mob)
		{
			this->empid=empid;
			strcpy(this->name,name);
			strcpy(this->dept,dept);
			this->sal=sal;
			strcpy(this->adhar,adhar);
			strcpy(this->mob,mob);
		}
		
		void display()
		{
			Person::display();
			cout<<"\nEmployee Details :\n";
			cout<<empid<<"\n"<<name<<"\n"<<dept<<"\n"<<sal<<"\n"<<adhar<<"\n"<<mob;
		}
};


int main()
{
	int empid;
	char dept[90],name[90],mob[90],adhar[90];
	long int sal;
	
	cout<<"Enter id,Name,Deparment,Salary,Adhar and Mobile :\n";
	cin>>empid>>name>>dept>>sal>>adhar>>mob;
	
	Employee e(empid,name,dept,sal,adhar,mob);
	e.display();
	
	return 0;
}
*/

//========================================================================================================================
//Q.2) WAP to create the abstract class name as StringOperation with method name as performOperation(String) and write its 
//different logics in different child classes as per given diagram. 
//========================================================================================================================


#include<iostream>
#include<string.h>
using namespace std;

class StringOperation
{
	
}
