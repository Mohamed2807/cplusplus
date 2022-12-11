#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
	public:
	void sum(int num,int imag,int num1,int imag1){
		int real=num+num1;
		int imag3=imag+imag1;
		cout<<"the sum is "<<real<<"+i"<<imag3<<endl;
		
	}
	void diff(int num,int imag,int num1,int imag1){
		int real=num-num1;
		int imag3=imag-imag1;if(imag<imag1){imag3=(imag3*(-1));
		cout<<"the difference  is "<<real<<"-i"<<imag3<<endl;}
		else{
					cout<<"the difference  is "<<real<<"+i"<<imag3<<endl;}
		
	}
	void product(int num,int imag,int num1,int imag1){
		int real=num*num1;
		int imag3=imag*imag1;
		cout<<"the product is "<<real<<"+i"<<imag3<<endl;
	}
	
	
};

int main(){
	int real,imag,real1,imag1;
	cout<<"Enter the first real number anf imag number respectively";
	cin>>real;cout<<endl<<"i";
	cin>>imag;
	cout<<"Enter the first real number anf imag number respectively";
	cin>>real1;cout<<endl<<"i";
	cin>>imag1;
	Complex c;
	c.sum(real,imag,real1,imag1);c.diff(real,imag,real1,imag1);
	c.product(real,imag,real1,imag1);	
}