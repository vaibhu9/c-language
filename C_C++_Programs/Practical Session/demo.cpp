#include<iostream>
using namespace std;

int main()
{
	char str[90];
	int i;
	cin>>str;
	int len=0;
	while(str[i]!='\0')
	{
		len++;
	}
	
	for(int i=0;i<len/2;i++)
	{
		char temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
	
	cout<<str;
	
	return 0;
}
