// Q.) Count the frequency of each digit in given integer.
//===========================================================================================================

#include<iostream>
using namespace std;

int main()
{
	int i,j,n,count,rem;

	cout<<"Enter number : ";
	cin>>n;

	for(i=0;i<10;i++)
	{
		count=0;
		for(j=n;j!=0;j=j/10)
		{
			rem=j%10;
			if(rem==i)
			{
				count++;
			}
		}
		if(count>0)
		{
			cout<<"\nFrequency of "<<i<<" is = "<<count;
		}
	}
	return 0;
}
