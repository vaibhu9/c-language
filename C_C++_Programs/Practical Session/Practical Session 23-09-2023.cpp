//////////////////// Practical Session 23-09-23 ///////////////////////
//==================================================================================================================
//Q.1) WAP to creat the class name as circle with a following methods.
//==================================================================================================================

/*
#include<iostream>
using namespace std;

class Circle
{    
	float area,p=3.14,t;
	public:
	void setRadius(float r)
	{
		t=r;
	          
	}
	
	void showArea()
	{
		cout<<"\nArea of cicle is = "<<p*t*t;
	}
};


int main()
{
	float radius;
	
	cout<<"Enter the radius : ";
	cin>>radius;
	
	Circle c;//class object
	
	c.setRadius(radius);

	
	c.showArea();
	
	return 0;
}
*/

//==================================================================================================================
//Q.2) Create the class name as rectangle with a following methods and write its logics.
//==================================================================================================================

/*
#include<iostream>
using namespace std;

class Rectangle
{    
	int l,b;
	public:
	void setLenBre(int length,int breadth)
	{
		l=length;
		b=breadth;
	          
	}
	
	void showArea()
	{
		cout<<"\nArea of rectangle is = "<<l*b;
	}
};


int main()
{
	int len,bre;	
	cout<<"Enter the Length and Breadth :\n";
	cin>>len>>bre;
	
	Rectangle r;//class object
	
	r.setLenBre(len,bre);

	
	r.showArea();
	
	return 0;
}
*/

//==================================================================================================================
//Q.3) WAP to create the class Employee with a following methods.
//==================================================================================================================

/*
#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	char name[90];
	int id,incr;
	long int basicSal;
	
	public:
	void setPersonalinfo(char name[30],int id,long int basicSal)
	{
		strcpy(this->name,name);
		this->id=id;
		this->basicSal=basicSal;
		
	}
	
	void setProgressPer(int progress)
	{
		if(progress>60)
		{
			incr=basicSal*0.3;
		}
		else
		{
			incr=0;
		}
	}
	
	void show()
	{
		cout<<"\nID of employee : "<<id<<"\nName of employee : "<<name<<"\nBasic Salary is : "<<basicSal<<"\nIncrement : "<<incr<<"\nTotal Salary : "<<basicSal+incr;
	}
};

int main()
{
	char n[30];
	int id,p;
	long int bs;
	
	cout<<"\nEnter name,id and basic salary of employee :\n";
	cin>>n>>id>>bs;
	
	Employee e;
	
	e.setPersonalinfo(n,id,bs);
	
	cout<<"\nEnter the progress of employee : ";
	cin>>p;
	
	e.setProgressPer(p);
	e.show();
	
	return 0;
}
*/

//==================================================================================================================
//Q.4) WAP to create the class name as Student with a following methods.
//==================================================================================================================

/*
#include<iostream>
using namespace std;

class Student
{
	int *ptr,i,total;
	float agr=0,per;
	public:
	
	void setSubMarks(int s[],int t)
	{
		ptr=s;
		total=t;
	}
	
	void calculatePer()
	{
		for(i=0;i<6;i++)
		{
			agr=agr+*(ptr+i);
		}
		
		per=agr*100/total;	
		cout<<"\nPercentage = "<<per;
	}
	
	void checkGrades()
	{
		(per>75&&per<=100)?cout<<"\nStudent in distintion":(per>60&&per<=75)?cout<<"\nFirst Division":(per>=50&&per<=60)?cout<<"\nSecond Division":(per>40&&per<=50)?cout<<"\nThird Division":cout<<"\nFailed";
	}
};


int main()
{
	int s[6],i;
	Student st;
	
	cout<<"Enter marks :\n";
	for(i=0;i<6;i++)
	{
		cin>>s[i];
	}
	
	st.setSubMarks(s,600);
	st.calculatePer();
	st.checkGrades();
	
	return 0;
}
*/

//==================================================================================================================
//Q.5) Create the class name as ConvertToUpper with a following methods.
//==================================================================================================================

/*
#include<iostream>
#include<string.h>
using namespace std;

class ConvertToUpper
{
	char c[30];
	int i=0;
	
	public:
	void setCharArray(char ch[])
	{
		strcpy(c,ch);
	}
	
	void convertToUpperCase()
	{
		while(c[i]!='\0')
		{
			if(c[i]>=97&&c[i]<=122)
			{
				c[i]=c[i]-32;
			}
			cout<<c[i++];
		}
	}
};


int main()
{
	char ch[30]={"good"};
	
	ConvertToUpper c;
	
	c.setCharArray(ch);
	
	c.convertToUpperCase();
	
	return 0;
	
}
*/

