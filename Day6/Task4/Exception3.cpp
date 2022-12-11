#include<iostream>
using namespace std;



int main()
{
	int a,b;
	char c;
    a=10;
	b=10;
	c='+';
	
	
	try{
	
	if(a==0) throw(a);
		else if (c!='/') throw(c);
			else if(b==0) throw(b);
			
	

	}catch (int ca) {  
	cout <<"one of the integer is zero "<<ca; } 
	catch(char ca){
		cout <<"the given"<<ca<<" is not the divide operator "; 
	}
	
}