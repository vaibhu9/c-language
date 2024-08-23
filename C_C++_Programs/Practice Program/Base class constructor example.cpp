#include<iostream>
using namespace std;

class A{
	public:
		A(int x){
			cout<<"I am "<<x;
		}
};
class B:public A{
	public:
		B(int x):A(x){
			cout<<"My name is "<<x;
		}
};
int main(){
	B b1(500);
	return 0;
}
