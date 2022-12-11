#include<iostream>
using namespace std;
class Complex
{
	public:
	int real,img;
	Complex(int num1,int num2)
	{
		this->real=num1;
		this->img=num2;
	}
	Complex operator+(Complex c)
{
	
	c.real=this->real+c.real;
	c.img=this->img+c.img;
	return c;	
}

void show()
{
	char symbol='+';
	cout<<real<<symbol<<"i"<<img;
}
};


int main()
{
	Complex c1(10,15);
	Complex c2(12,18);
	Complex c3=c1+c2;
	c3.show();
	
	
	
	
	return 0;
	
}