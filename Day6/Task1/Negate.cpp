#include<iostream>
using namespace std;

 

class Numbers

{

        int x,y,z;

        public:

                // methods
		Numbers(int a,int b,int c)
		{
			this->x=a;
			this->y=b;
			this->z=c;
		}
		void negate(){
			x=-x;
			y=-y;
			z=-z;
			cout<<x<<"   "<<y<<"   "<<y;
			
		}

};

int main()
{
	int num,num2,num3;
	
	cout<<"Num1=";
	cin>>num;
	cout<<"Num2=";
	cin>>num2;
	cout<<"Num3=";
	cin>>num3;
	
	Numbers number=Numbers(num,num2,num3);
	cout<<"The given numbers are;\n";
	cout<<num<<"   "<<num2<<"   "<<num3;
	cout<<"\nThe negated numbers are\n";
	number.negate();
	

	
	
	return 0;
	
}