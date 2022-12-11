#include<iostream>
using namespace std;



int main()
{
	int a;
	double d;
	d=100.45;
	a=60;
	
	
	try{
	
	throw a;
	throw d;
	
	

	}catch (int ca) {  
	cout <<"the number is integer"<<ca; } 
	catch(double ca){
		cout <<"the number is double"; 
	}
	
}