/////////////////// Practical Session 10-10-2023 ///////////////////
//=============================================================================================================================
//Q.1) WAP using inheritance with a simple Interest Rate Formula for calculate the interest on loan we have the following class
// hierarchy and conditions given below. 
//=============================================================================================================================

/*
#include<iostream>
using namespace std;

class Interest
{
	protected:
		int pamt,dur;
		float irate;
		
	public:
	void setPRD(int pamt,float irate,int dur)
	{
		this->pamt=pamt;
		this->irate=irate;
		this->dur=dur;
	}
};

class CalculateInterest : public Interest
{
	public:
		void calInterest()
		{
			float total=(pamt*irate*dur)/100;
			cout<<"\n\nInterest is : "<<total;
		}
};

int main()
{
	int pamt,dur;
	float irate;
	
	cout<<"Enter principal amount, interest rate and duration :\n";
	cin>>pamt>>irate>>dur;
	
	CalculateInterest c;
	c.setPRD(pamt,irate,dur);
	c.calInterest();
	
	return 0;
}
*/

//============================================================================================================================
//Q.2) Create the class ArrayOpration with function name as performOpration(int []) and extends class given below.
//============================================================================================================================

/*
#include<iostream>
using namespace std;

class ArrayOperation
{
	protected:
		int *ptr;
		
	public:
		void performOpration(int a[])
		{
			ptr=a;
		}
};

class Sort : public ArrayOperation
{
	public:
		void sortArray()
		{
			cout<<"\n\nAfter sorting array : ";
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
				cout<<ptr[i]<<" ";
			}
		}
};


class Insertion : public ArrayOperation
{
	public:
		void insertinArray()
		{
			int index,value;
			cout<<"\n\nEnter index number and value :\n";
			cin>>index>>value;
			cout<<"\n\nAfter inserting value in array : ";
//			for(int i=5;i>=index;i--)
//			{
//				ptr[i]=ptr[i-1];
//				if(i==index)
//				{
//					ptr[i]=value;
					ptr[index]=value;
//				}
//			}
			
			for(int i=0;i<6;i++)
			{
				cout<<ptr[i]<<" ";
			}
		}
};


class Deletion : public ArrayOperation
{
	public:
		void deletioninArray()
		{
			int index;
			cout<<"\n\nEnter index number : ";
			cin>>index;
			cout<<"\nAfter deleting element of array : ";
			for(int i=index;i<6;i++)
			{
				ptr[i]=ptr[i+1];
			}
			for(int i=0;i<5;i++)
			{
				cout<<ptr[i]<<" ";
			}
		}
};


class Reverse: public ArrayOperation
{
	public:
		void reverseArray()
		{
			cout<<"\n\nAfter reversing array : ";
			int len=6;
			
			for(int i=0;i<=len/2;i++)
			{
				int temp=ptr[i];
				ptr[i]=ptr[len-1-i];
				ptr[len-1-i]=temp;
			}
			
			for(int i=0;i<len;i++)
			{
				cout<<ptr[i]<<" ";
			}
		}
};

int main()
{
	int a[6],len,choice;
	len=sizeof(a)/sizeof(a[0]);
	cout<<"Enter elements in array :\n";
	for(int i=0;i<len;i++)
	{
		cin>>a[i];
	}
	cout<<"\nGiven array is : ";
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	do
	{
		cout<<"\n1. Sorting array\n2. Insertion\n3. Deletion\n4. Reverse\n5. Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				Sort s;
				s.performOpration(a);
				s.sortArray();
				
				break;
				
			case 2:
				Insertion i;
				i.performOpration(a);
				i.insertinArray();
				
				break;
				
			case 3:
				Deletion d;
				d.performOpration(a);
				d.deletioninArray();
				
				break;
				
			case 4:
				Reverse r;
				r.performOpration(a);
				r.reverseArray();
				
				break;
				
			default : cout<<"\nYou have entered wrong choice !!!";
		}
	}while(choice!=5);
	
	return 0;
}
*/

//=================================================================================================================================
//Q.3) 
//=================================================================================================================================



