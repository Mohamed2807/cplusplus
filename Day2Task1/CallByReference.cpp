#include<iostream>

using namespace std;
int val=1;
void reference(int &num,int &num2)
{
 
int temp=num;
num=num2;
num2=temp;
}
int main()
{
int a=10,b=20;
cout<<a<<"  "<<b;
reference(a,b);
cout<<a<<"  "<<b;

}