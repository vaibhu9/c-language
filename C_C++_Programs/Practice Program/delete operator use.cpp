#include<iostream>
using namespace std;

int main(){
	cout<<"Hello World\n";
	int *ptr1=new int;
	int *ptr2=new int(20);
	cout<<"Value is : "<<*ptr1<<"\n";
	cout<<"Value is : "<<*ptr2<<"\n";
	
	delete ptr1;
	delete ptr2;
	
	cout<<"\nAfter delete ptr1 : "<<*ptr1<<"\n";
	cout<<"After delete ptr2 : "<<*ptr2<<"\n";
	
	return 0;
}
