#include<iostream>

template<class T>
class Demo
{
	T num;
	T num2;
	public:
	Demo(T a,T b)
	{
		this->num=a;
		this->num2=b;
	}
	
	void add()
	{
		cout<<"The addition is "<<num+num2<<endl;
		
	}
	void sub()
	{
		cout<<"The subtraction is "<<num-num2<<endl;
		
	}
	void Multi()
	{
		cout<<"The Multiple  is "<<num*num2<<endl;
		
	}
	void divide()
	{
		cout<<"The division  is "<<num/num2<<endl;
	}
	
};
 int main()
 {
	 Demo<int> d(20,10);
	 d.add();
	 d.sub();
	 d.Multi();
	 
	 
 }