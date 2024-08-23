#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Test{
     public:
    Test()
     {
       cout<<"I am constructor";
     }
};
void fun()
{
   static Test t1;
}
int main()
{  
   cout<<"Before fun() call..........\n";
    fun();
    fun();
  cout<<"After fun Call.............\n";
   return 0;
}


