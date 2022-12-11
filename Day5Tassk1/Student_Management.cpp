#include <iostream>
using namespace std;

void Athenticate();

string name[10];
    int age[10];
    int marks[10];
    string course[10];
    int val=0;
    static int count1 = 0;

class Student {
public:
      string name1;
      int age1;
      int marks1;
      string course1;
     
    void  Apply()
    {
        cout << "Enter the Student Name =";
        cin >> name1;   name[count1] = name1;
        cout << "Enter the Student Age =";
        cin >> age1;   age[count1] = age1;
        cout << "Enter the Student Marks =";
        cin >> marks1;   marks[count1] = marks1;
       
       
    }
       
};


class Course:public Student{
    
public:
    Course() {
      
  }
    void applyC(){
        cout << "Select the courses Listed below\n1. BSC \n2.BCom\n3.BE ";
        cout << "\n Enter the Course=";
        cin >> this->course1; course[count1] = course1;
        count1++; val = count1;
    }
};
class Admin:public Course
 {
 public:
  
     void show(){
        int i = 0;
         for (; i < val; i++) {
             cout << "\n\n Student Name =" << name[i];

             cout << "\n Student Age =" << age[i];

             cout << "\nStudent Marks =" << marks[i];

             cout << "\nStudentCourse " << course[i];
         }
     }

     void search() {
         string stuname;
         cout << "\nEnter the name of the student";
         cin >> stuname;
         int i = 0; int initial;
         for (; i < val; i++) {
             if (name[i] == stuname) { initial = i; }
         }
         cout << "\n\n Student Name =" << name[initial];

         cout << "\n Student Age =" << age[initial];

         cout << "\nStudent Marks =" << marks[initial];

         cout << "\nStudentCourse " << course[initial];

     }

};




void Athenticate() 
{
    
    string A = "Ashik",B,C="1234",D;
    system("cls");
    repeat:
    cout << "Enter Username = ";
    cin >> B;
    cout << "Enter password = ";
    cin >> D;
    if ((A.compare(B)) != 0) 
    { 
        cout << "UserName Does Not Match \n Retry";
       
    } 
    else 
    {
        if ((C.compare(D)) != 0)
        {
            cout << "Password is Incorrect \n Retry";
            goto repeat;
        }
        else
        {
            cout << "sucessfully Login";
          
        }
    }


}

void Users() 
{ 
    Admin a;
    int demo;
    
    cout << "\nEnter 1 for Administration \nEnter 2 for Apply Seats in College\n Enter 3 for Exit ";
    int aa; 
    
    cout<< "\n\n Enter the number = ";
    cin >> aa;
    switch(aa){
    case 2:a.Apply(); a.applyC(); break;
    case 1:a.show(); 
        cout << "\n\npress 1 to search student";
        cin >> demo;
        if (demo == 1) { (a.search()); }
            break;
    }

}

int main()
{
    repeat:
    Users();
    int a;
    cout << "press 1 to continue.....";
    cin >> a;
    if (a == 1) goto repeat; 
}

