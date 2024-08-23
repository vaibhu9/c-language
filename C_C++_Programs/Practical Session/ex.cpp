#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	int id,sal;
	char name[];
	
	public:
	void setData(int id,char name[],int sal)
	{
		this->id=id;
		strcpy(this->name,name);
		this->sal=sal;
	}
	
	void displayData()
	{
		cout<<"\nID is : "<<id;
		cout<<"\nName is : "<<name;
		cout<<"\nSalary is : "<<sal;
	}
};

int main()
{
	int id,sal;
	char name[6];
	
	cout<<"Enter id name and sal";
	cin>>id>>name>>sal;
	
	Employee e;
	
	e.setData(id,name,sal);
	e.displayData();
	
	return 0;
}
