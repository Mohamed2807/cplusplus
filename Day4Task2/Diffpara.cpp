#include<iostream>
using namespace std;
class Student
{
	
	public:
	void para(string name,int roll){
		cout<<"The name is "<<name<<endl;
		cout<<"The Roll no is "<<roll<<endl;
	}
	void para(int roll,string name){
		cout<<"The name is "<<name<<endl;
		cout<<"The Roll no is "<<roll<<endl;
	}
};
int main()
{
	Student s1;
	
	s1.para("Ashik",101);
	s1.para(102,"Mohamed");
	
return 0;
	
}