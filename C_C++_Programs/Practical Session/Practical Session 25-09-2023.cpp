//////////Practical Session 25-09-2023////////////
//===================================================================================================================
//Q.1) WAP to creat the class name as InsertArrayEle with a following methods
//===================================================================================================================

/*
#include<iostream>

using namespace std;

class InsertArrayEle
{
	int *c,len;
	
	public:
	void setIntArray(int ch[],int l)
	{
		c=ch;
		len=l;
	}
	
	void insertValueOnIndex(int index,int value)
	{
		int i;
		
		cout<<"\nBefore inserting element : ";
		for(i=0;i<len-1;i++)
		{
			cout<<c[i];
		}
		
		for(i=len-1;i>index;i--)
		{
			c[i]=c[i-1];
		}
		c[i]=value;
		
		cout<<"\nAfter inserting element : ";
		for(i=0;i<len;i++)
		{
			cout<<c[i];
		}
	}
};


int main()
{
	int ch[6],i,v,in;
	int len=sizeof(ch)/sizeof(ch[0]);
	
	cout<<"\nEnter elements in array :\n";
	for(i=0;i<len-1;i++)
	{
		cin>>ch[i];
	}
	
	InsertArrayEle e;
	
	cout<<"\nEnter index and value :\n";
	cin>>in>>v;
	
	e.setIntArray(ch,len);
	e.insertValueOnIndex(in,v);
	
	return 0;
}
*/

//===================================================================================================================
//Q.2) WAP to create the class name as ArrayFeqCount with a following methods.
//===================================================================================================================

/*
#include<iostream>
using namespace std;

class ArrayFeqCount
{
	int *ptr;
	public:
		
	void setInArray(int ch[])
	{
		ptr=ch;
		
	}
	
	int feq=1;
	void feqCount()
	{
		for(int i=0;i<6;i++)
		{
			if(ptr[i]==ptr[i+1])
			{
				feq++;
			}
			else
			{
				cout<<"\nOccurence of = "<<ptr[i]<<" is "<<feq<<" times.";
				feq=1;
			}
		}
	}
};


int main()
{
	int a[6],i;
	
	cout<<"\nEnter elements in array :\n";
	for(i=0;i<6;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\nGiven array is : ";
	for(i=0;i<6;i++)
	{
		cout<<a[i];
	}
	
	ArrayFeqCount f;
	
	f.setInArray(a);
	f.feqCount();
	
	return 0;
}
*/

//===================================================================================================================
//Q.3) WAP to create the class name as Seller with a following functions
//===================================================================================================================

/*
#include<iostream>
using namespace std;

class Seller
{
	int sp,cp,diff;
	
	public:
		
		void acceptSellingCostPrice(int sp,int cp)
		{
			this->sp=sp;
			this->cp=cp;
		}
		
		void showProfitLoss()
		{
			diff=sp-cp;
			(diff==0)?cout<<"\nNo loss and No profit":(diff>0)?cout<<"\nProfit is = "<<diff:cout<<"\nLoss is = "<<diff*-1;
		}
};

int main()
{
	int sp,cp;
	
	cout<<"\nEnter Selling price and Cost price :\n";
	cin>>sp>>cp;
	
	Seller s;
	s.acceptSellingCostPrice(sp,cp);
	s.showProfitLoss();
	
	return 0;
}
*/

//===================================================================================================================
//Q.4) WAP to create the pojo class name as Student class with a following methods and data or variable/state
//===================================================================================================================

#include<iostream>
using namespace std;

class DiscountFees
{
	
}
