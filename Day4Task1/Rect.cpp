#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{
	public :
	int s;int a,b;
	int SetDim(int a,int b)
	{
		int sa;
		this->a=a;
		this->b=b;
		sa=(a+b)*2;
		this->s=sa;
		return sa;
		
	}
	int  getarea()
	{
		int area=this->a*this->b;
	
		return area;
	}
	
	
	
};
int main()
{
	Rectangle t;
	cout<<"Enter length and hight od rectangle respectively"<<endl;
	int a,b,c;
	cin>>a>>b;
	
	cout<<"parameter of a Rectangle"<<t.SetDim(a,b)<<endl;
	cout<<"Area of the rectangle"<<t.getarea();
	
	
	
}