#include<iostream>
using namespace std;

 

class Concatenate

{

       string name;

    public:

        //methods;
	 Concatenate(string a){
		this->name=a;
		
	}
	Concatenate operator+(Concatenate m)
	{
		
				m.name+=this->name;
		
		return m;
	}
	void show(){
		
			cout<<name;
	
		
	}

};

int main()
{
Concatenate c1("Mohamed ");
Concatenate c2("Ashik ");
Concatenate c3=c1+c2;
c3.show();
	
	
	

	
	
	return 0;
	
}