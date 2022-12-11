#include<iostream>
#include<string>

using namespace std;


int main()
{
cout<<"Enter the array to count";
string name;
getline(cin,name);
cout<<name.length()<<endl;int count=0;
for(int i=0;i<name.length();i++)
{
if(name[i]!=' '){count++;}
}
cout<<count;
}