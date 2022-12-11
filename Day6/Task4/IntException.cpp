#include<iostream>
using namespace std;



int main()
{
	int a;
	a=10;
	
	try{
	
		throw(a);
	

	}catch (int a) {  
	cout <<"the number exception "<<a; } 
	
}