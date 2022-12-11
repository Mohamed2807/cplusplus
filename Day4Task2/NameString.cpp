#include<iostream>
using namespace std;
class Student
{
	
	public:
	string name ="UnKnown" ;
	Student(string name){
	this->name=name;
	cout<<name;
	}
	Student(){cout<<this->name;}
	
};
int main()
{
	Student s1=Student("Mohamed Ashik");
	Student s2 =Student();
	
	
return 0;
	
}