#include<iostream>
using namespace std;
class Demo
{	int n;
	public:
	Demo(int num)
	{
		this->n=num;
	}
	int operator++(){
		n=n*10/100;
		cout<<"The increment is "<<n;
return n;
	}
	void operator--(){
		n-=3;
		cout<<"\nThe decrement is "<<n;
	}

};



int main()
{
	Demo d =Demo(100);
	cout<<++d;
	--d;
	
	
	
	
	
	
	
}