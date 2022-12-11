#include<iostream>

using namespace std;
int val=1;
int recursion(int num,int power)
{
 val=val*num;
if(power==1)return val;
else{
return recursion(num,power-1);
}
}
int main()
{
cout<<"Enter the number ";
int num;
cin>>num;
cout<<"Enter the number";
int power;
cin>>power;
cout<<recursion(num,power);
}