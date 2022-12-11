#include<iostream>
using namespace std;
string reverse="";
int recursion(string name,int val)
{
static int len=val;
reverse=reverse+name[len];
if(len==0){return 0;}
else{return recursion(name,len--);}
}




int main()
{
string name;
cout<<"Enter the String name";
cin>>name;
recursion(name,name.length());
cout<<reverse;
}