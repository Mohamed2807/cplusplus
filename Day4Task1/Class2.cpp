#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int rollno;
	double phone;
	string address;
	
	
	
};
int main()
{
	Student s1;
	Student s2;
	s1.name="Sam";
	s1.rollno=105;
	s1.phone=8489812039;
	s1.address="Kumbakonum";
	s2.name="John";
	s2.rollno=205;
	s2.phone=6379104535;
	s2.address="Chennai";
	cout<<"the student name is "<<s1.name<<endl;
	cout<<"the student roll no is "<<s1.rollno<<endl;
	cout<<"the student phone is "<<s1.phone<<endl;
	cout<<"the student address is "<<s1.address<<endl<<endl;
	
	cout<<"the student name is "<<s2.name<<endl;
	cout<<"the student roll no is "<<s2.rollno<<endl;
	cout<<"the student phone is "<<s2.phone<<endl;
	cout<<"the student address is "<<s2.address<<endl;
	
	
	
}