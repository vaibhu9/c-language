////////
//// Assignment 07-10-2023 ////////////////
//===============================================================================================================
//Q.1 ) Write a constructor for result which accepts array of Student class object, to create constructor Student 
//to set the parameter and create another function FindTopper() find topper from those students and display 
//topper students information.
//===============================================================================================================


#include<iostream>
using namespace std;

class Student
{
	private:
		Student *ptr;
		int len,roll,marks,index;
		char name[50];
		
	public:
		Student()
		{
			
		}
		Student(Student a[],int len)
		{
			ptr=a;
			this->len=len;
		}
		
		void setData()
		{
			cout<<"\nEnter roll : ";
			cin>>roll;
			cout<<"\nName : ";
			cin>>name;
			cout<<"\nEnter total marks : ";
			cin>>marks;
		}
		
		void FindTopper()
		{
			int max=ptr[0].marks;
			for(int i=0;i<len;i++)
			{
				if(ptr[i].marks>max)
				{
					max=ptr[i].marks;
					index=i;
				}
			}
			
			cout<<"\n\nTopper student is :";
			cout<<"\nRoll : "<<ptr[index].roll;
			cout<<"\nName : "<<ptr[index].name;
			cout<<"\nMarks : "<<ptr[index].marks;
		}
};

int main()
{
	Student s[3];
	
	for(int i=0;i<3;i++)
	{
		s[i].setData();
	}
	
	Student s1(s,3);
	s1.FindTopper();
	
	return 0;
}

//===============================================================================================================
//Q.2) WAP to create the class name as Prime using parameterized constructor input the number and check number is
//prime or not . In this program we have to create the constructor Prime(int) and input the number and pass to
//constructor as well as we have to define the method name as int checkPrime() this method can check number
//is prime or not if number is prime then return 1 otherwise return 0 ;
//===============================================================================================================

/*
#include<iostream>
using namespace std;

class Prime
{
	private:
		int n;
		
	public:
		Prime(int n)
		{
			this->n=n;
		}
		
		int checkPrime()
		{
			int i=1,count=0;
			while(i<=n/2)
			{
				if(n%i==0)
				{
					count++;
				}
				i++;
			}
			if(count>1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
};

int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	
	Prime p(num);
	int flag=p.checkPrime();
	(flag)?cout<<"\nGiven number is prime.":cout<<"\nGiven number is not prime.";
	
	return 0;
}
*/

//===============================================================================================================

//===============================================================================================================


//===============================================================================================================

//===============================================================================================================



