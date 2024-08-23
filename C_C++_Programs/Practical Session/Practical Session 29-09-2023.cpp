/////////// Practical Session- 29-09-2023 ///////////////////
//===============================================================================================================================
//Q.1) Create a class Food with data members Fid,Fname,Price,category.
//Create array of object of size 5, store food details in it and perform following operations.
//case 1. Display all food details
//case 2. Sort all data by price in descending order
//case 3. Display food details whose price between 200 to 400
//case 4. Search food dishesh by Fid,Fname,category,price
//case 5. Update food details
//case 6. Delete food
//===============================================================================================================================

#include<iostream>
#include<string.h>
using namespace std;

class Food
{
	private:
		int Fid,price;
		char fn[30],fc[30];
		
	public:
		void setdata(int,int,char[],char[]);
		void showData();
		int getPrice();
		int getFid();
		char *getFname();
		char *getCategory();
};

void Food::setdata(int Fid,int price,char fn[],char fc[])
{
	this->Fid=Fid;
	this->price=price;
	strcpy(this->fn,fn);
	strcpy(this->fc,fc);
}

void Food::showData()
{
	cout<<"\n"<<Fid<<"\t"<<price<<"\t"<<fn<<"\t"<<fc;
}

int Food::getPrice()
{
	return price;
}

int Food::getFid()
{
	return Fid;
}

char *Food::getFname()
{
	return fn;
}

char *Food::getCategory()
{
	return fc;
}
	


int main()
{
	Food f[5];
	int Fid,price,i,n,ch,c;
	char fn[30],fc[30];
	
	cout<<"Enter data in array : ";
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter id,price,name,category\n";
		cin>>Fid>>price>>fn>>fc;
		f[i].setdata(Fid,price,fn,fc);
	}
	
	do
	{
		
		cout<<"\n\ncase 1. Display all food details";
		cout<<"\ncase 2. Sort all data by price in descending order";
		cout<<"\ncase 3. Display food details whose price between 200 to 400";
		cout<<"\ncase 4. Search food dishesh by Fid,Fname,category,price";
		cout<<"\ncase 5. Update food details";
		cout<<"\ncase 6. Delete food";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		
		switch(ch)
		{
		
		case 1:
				cout<<"\n\nDisplay all Food Details :\n";
				for(i=0;i<5;i++)
				{
					f[i].showData();
				}
			break;
			
		case 2:
				cout<<"\n\nAfter sorting price in descending order :\n";
	for(i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			int p1=f[i].getPrice();
			int p2=f[j].getPrice();
			if(p1<p2)
			{
				Food temp=f[i];
				f[i]=f[j];
				f[j]=temp;
			}
		}
		f[i].showData();
	}
			break;
			
		case 3:
				cout<<"\n\nPrice between 200 to 400 :\n";
	for(i=0;i<5;i++)
	{
		int p1=f[i].getPrice();
		if(p1>=200&&p1<=400)
		{
			f[i].showData();
		}
	}
			break;
			
		case 4:
			
				do
	{
		cout<<"\n1.id\n2.price\n3.name\n4.category\n";
		cout<<"\nEnter search method : ";
		cin>>c;
		
		switch(c)
		{
			case 1:
				
				cout<<"\n\nEnter food id number : ";
	cin>>n;
	for(int i=0;i<5;i++)
	{
		int t1=f[i].getFid();
		if(t1==n)
		{
			f[i].showData();
			break;
		}
	}
	
	
				break;
			
			case 2:
				
				cout<<"\n\nEnter food price : ";
	cin>>n;
	for(i=0;i<5;i++)
	{
		int t1=f[i].getPrice();
		if(t1==n)
		{
			f[i].showData();
			break;
		}
	}
	
	
				break;
				
			case 3:
				
				cout<<"\n\nEnter food name : ";
	char sk[30];
	cin>>sk;
	for(i=0;i<5;i++)
	{
		if(strcmp(f[i].getFname(),sk)==0)
		{
			f[i].showData();
			break;
		}
	}
	
	
				break;
				
			case 4:
				
				cout<<"\n\nEnter category of food : ";
	cin>>sk;
	for(i=0;i<5;i++)
	{
		if(strcmp(f[i].getCategory(),sk)==0)
		{
			f[i].showData();
		}
	}
				break;
		}
	}while(c<=4);

				
			break;
			
		case 5:
				
				cout<<"\n\nEnter id number to update food : ";
	cin>>n;
	for(i=0;i<5;i++)
	{
		if(f[i].getFid()==n)
		{
			cout<<"\nEnter price,name and category :\n";
			cin>>price>>fn>>fc;
			f[i].setdata(n,price,fn,fc);
			
			break;
		}
	}
	
	cout<<"\n";
	for(i=0;i<5;i++)
	{
		f[i].showData();
	}
			break;
			
		case 6:
				cout<<"\n\nEnter id number to delete food : ";
	cin>>n;
	for(i=0;i<5;i++)
	{
		if(f[i].getFid()==n)
		{
			for(int j=i;j<4;j++)
			{
				f[j]=f[j+1];
			}
			break;
		}
	}
	cout<<"\n";
	for(i=0;i<4;i++)
	{
		f[i].showData();
	}
			break;
		default : cout<<"\nYou have entered wrong choice !!!";
	}
	
	}while(ch<=6);
	
	return 0;
}
