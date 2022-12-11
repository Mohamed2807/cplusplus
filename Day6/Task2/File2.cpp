#include<iostream>
#include"File1.cpp"
#include"File3.cpp"

using namespace  std;
namespace Second{
	int  sub(int a,int b){
		return a-b;
	}
	
}


using namespace Second;

int main(){
	cout<<sub(Demo::Add(10,20),Demo::multiple(3,5));cout<<endl;
	cout<<sub(Demo1::Add(10,20),Demo1::multiple(3,5));
	return 0;
}