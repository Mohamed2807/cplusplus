#include<iostream>
using namespace std;
class Rectangle
{
	
	public:
	int len,bred;
	 Rectangle(int l,int b)
	{
		this->bred=b;
		this->len=l;
	
	}
	Rectangle(int num){
		this->bred=num;
		this->len=num;
	}
	 Rectangle()
	{
	    this->bred=0;
		this->len=0;	
	}
	
	void result()
	{
		cout<<"The Area of the rectangle is "<<len*bred<<endl;
	}
	
};
int main()
{
	Rectangle r = Rectangle();
	Rectangle r1 = Rectangle(10);
	Rectangle r2 =Rectangle(10,50);
	
	r.result();
	
	r1.result();

	r2.result();
	
	
return 0;
	
}