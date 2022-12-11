#include<iostream>
using namespace std;






	
	
	template<class T>T swap1(T &a,T &b)
	{
		T c;
		c=a;
		a=b;
		b=c;
		return c;
	}
	
	

 int main()
 {
	int num=10,num2=20;;
	char c1='a',c2='b';
	
	swap1(num,num2);
	swap1(c1,c2);
	
	cout<<"the num 1 is "<<num<<endl;
	cout<<"the  num 2 is"<<num2<<endl;
	cout<<"the char 1 is "<<c1<<endl;
	cout<<"the  char 2 is"<<c2<<endl;
	
 }
	 
	 
