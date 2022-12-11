#include<iostream>
using namespace std;

namespace First{
	
void  Demo(){
	cout<<"its a Namespace function";
   }
   void Demo2();
};
void First:: Demo2(){
	cout<<"its a Namespace function2";
}

using namespace First;
int main()
{
	
   First:: Demo();
	cout<<endl;
	Demo2();
}