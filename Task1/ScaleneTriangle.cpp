#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int val,val2,angle;
cout<<"Enter the first side";
cin>>val;
cout<<"Enter the second side of value\n";
cin>>val2;
cout<<"Enter the angle of the 3 sides\n";
cin>>angle;
cout<<"The are of the scalene triangle is\n ";
cout<<(val*val2*sin((3.14/180)*angle)/2);



}