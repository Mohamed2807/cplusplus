#include<iostream>
#include<string>

using namespace std;


int main()
{
cout<<"Enter the array ";
string name;
getline(cin,name);
int count=0, space=0, max=0, initial=0,arrcount=0,temp=0;
for(int i=0;i<name.length();i++)
                               {
                               if(name[i]==' '||i==name.length()-1){
                                               if(max<count){max=count;initial=temp;}
                                               temp=i;
cout<<temp<<" ";
                                                 count=0;
                                                }
                                 count++;
                                 arrcount++;

                                 }


cout<<endl<<initial<<endl;
cout<<max<<endl;
cout<<space<<endl;
for(int i=0;i<name.length();i++)
{
if(i>initial&&i<=initial+max)
{
cout<<name[i];
}
}



}