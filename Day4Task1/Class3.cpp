#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
	public :
	int s;
	int perimeter(int a,int b,int c)
	{
		int sa;
		
		sa=(a+b+c)/2;
		this->s=sa;
		return sa;
		
	}
	int  area(int a,int b,int c)
	{
		int p=this->s;
	
		int d=sqrt((p*(p-a))*((p-b)*(p-c)));
		return d;
	}
	
	
	
};
int main()
{
	Triangle t;
	cout<<"Enter 3 side of triangle respectively"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<"perimeter of a triangle"<<t.perimeter(a,b,c);
	cout<<"Area of the triangle"<<t.area(a,b,c);
	
	
	
}