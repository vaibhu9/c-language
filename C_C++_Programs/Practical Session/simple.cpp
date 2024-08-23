#include<iostream>
using namespace std;

class parent{
	
	protected:
		
		int *a;
		public:
			
};


class chield :public parent
{
	        public:
	        	
		void setvalue(int a[])
		{
				this->a=a;
		}
		
		void show()
		{
			for(int i=0;i<5;i++)
			{
				cout<<a[i];
			}
		}
		
		void logic()
		{
				for(int i=0;i<5;i++)
				{
						for(int j=i+1;j<5;j++)
						{
						
						if(a[i]>a[j])
						{
							
							int t=a[i];
							a[i]=a[j];
							a[j]=t;
						}
					}
					
					cout<<a[i];
				}
			
		}
	
};

int main()
{
	int a[5];
	cout<<"Enter elements : \n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	chield c;
	c.setvalue(a);
	c.show();
	c.logic();
	
	return 0;
}
