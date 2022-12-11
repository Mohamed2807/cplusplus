#include<iostream>
using namespace std;

 

class Matrix

{

        int a[3][3];

    public:

        //methods;
	void set(){
		cout<<"Enter the elements of first matrix\n";
	for(int i=0;i<3;i++)
	{
		
		for(int j=0;j<3;j++)
		{
			cout<<"\nEnter the element of index :"<<"["<<i<<"]["<<j<<"] =" ;
			cin>>a[i][j];
		}
	}
	}
	Matrix operator+(Matrix m)
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				m.a[i][j]=this->a[i][j]+m.a[i][j];
			}
		}
		return m;
	}
	void show(){
		for(int i=0;i<3;i++)
		{cout<<endl;
			for(int j=0;j<3;j++)
			{
				cout<<a[i][j]<<"   ";
			}
		}
		
	}

};

int main()
{
	Matrix m1;
	m1.set();
	Matrix m2;
	m2.set();
	Matrix m3;
	m3 =m1+m2;
	m3.show();
	
	
	
	

	
	
	return 0;
	
}