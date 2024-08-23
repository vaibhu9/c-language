///////////////// Lecture Assignment 01-10-2023 /////////////////
//===============================================================================================================
//Q.1) WAP to create class name as Cube with two methods.
//===============================================================================================================

/*
#include<iostream>
using namespace std;

class Cube
{
	private:
		int n;
		
	public:
		void setValue(int x)
		{
			n=x;
		}
		
		int getCube()
		{
			return n*n*n;
		}
};


int main()
{
	int num,cube;
	cout<<"Enter a number : ";
	cin>>num;
	Cube c;
	c.setValue(num);
	cube=c.getCube();
	cout<<"\nCube of "<<num<<" is = "<<cube;
	
	return 0;
}
*/

//===============================================================================================================
//Q.2) WAP to create class name as Factorial with two fuctions.
//===============================================================================================================

/*
#include<iostream>
using namespace std;

class Factorial
{
	private:
		int n;
		
	public:
		void setValue(int x)
		{
			n=x;
		}
		
		int getFactorial()
		{
			int f=1;
			while(n!=0)
			{
				f=f*n;
				n--;
			}
			return f;
		}
};

int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	
	Factorial f;
	f.setValue(num);
	int fac=f.getFactorial();
	cout<<"\nFactorial of "<<num<<" is = "<<fac;
}
*/

//===============================================================================================================
//Q.3) WAP to create class name as CheckChar with two functions.
//===============================================================================================================


#include<iostream>
using namespace std;

class CheckChar
{
	private:
		char ch;
		
	public:
		void setChar(char ch)
		{
			this->ch=ch;
		}
		
		int checkChar()
		{
			if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	char ch;
	cout<<"Enter the character : ";
	cin>>ch;
	
	CheckChar c;
	c.setChar(ch);
	int r=c.checkChar();
	if(r)
	{
		cout<<"\nTrue";
	}
	else
	{
		cout<<"\nFalse";
	}
	
	return 0;
}


//===============================================================================================================
//Q.4) WAP to create class name as FindMax with two functions.
//===============================================================================================================

/*
#include<iostream>
using namespace std;

class FindMax
{
	private:
		int *ptr;
		
	public:
		void setArray(int a[])
		{
			ptr=a;
		}
		
		int getMax()
		{
			int max=ptr[0];
			for(int i=0;i<6;i++)
			{
				if(ptr[i]>max)
				{
					max=ptr[i];
				}
			}
			return max;
		}
};

int main()
{
	int a[6];
	cout<<"Enter elements in array :\n";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	
	FindMax f;
	f.setArray(a);
	int max=f.getMax();
	
	cout<<"\nMax element in array is : "<<max;
	
	return 0;
}
*/

//===============================================================================================================
//Q.5) WAP to create class name as SortArr with two functions.
//===============================================================================================================

/*
#include<iostream>
using namespace std;

class SortArr
{
	private:
		int *ptr;
		
	public:
		void setArray(int a[])
		{
			ptr=a;
		}
		
		int *getSortArray()
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
			
			return ptr;
		}
};

int main()
{
	int a[6];
	cout<<"Enter element in array :\n";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	
	SortArr s;
	s.setArray(a);
	int *ptr;
	ptr=s.getSortArray();
	
	cout<<"\nAfter sorting array : ";
	for(int i=0;i<6;i++)
	{
		cout<<ptr[i];
	}
	
	return 0;
}
*/

//===============================================================================================================
//Q.6) WAP to create POJO class name as Employee with id,name and salary attribute and store data in object and retrive data from object.
//===============================================================================================================


