#include<iostream>
using namespace std;
namespace First
{
	
	void Demo();
	namespace Second{
		
		void Demo2()
		{
			cout<<"Nested Namespace Second function";
		}
	}
}
void First::Demo(){
	
	cout<<"First Namespace is called ";
}
using namespace First;
using namespace First::Second;
int main()
{
	//First::Demo();
	Demo();
	cout<<endl;
	Demo2();
	
}