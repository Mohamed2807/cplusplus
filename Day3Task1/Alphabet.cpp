#include<iostream>
#include<cstring>

using namespace std;


int main()
{
cout<<"Enter the array to count";
string name;
getline(cin,name);

for(int i=0;i<name.length();i++)
                                {
                                 
                                  int c=name[i];
                                   if(c==122){c=97;}else if(c==90){c=65;}else{c=c+1;}
                                   
                                   name[i]=c;
                
                                }


cout<<name;

}