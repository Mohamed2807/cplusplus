#include<iostream>
using namespace std;
class Student
{
	
	public:
	string name1="I Love ";
	string name ="Programming" ;
	Student(string name){
	this->name=name;
	cout<<this->name1<<" "<<this->name;
	}
	Student(){cout<<this->name1<<this->name;}
	
};
int main()
{
	Student s1=Student("Ashik");
	cout<<endl;
	Student s2 =Student();
	
	
return 0;
	
}