#include<iostream>
#include<string>

using namespace std;


int main()
{
cout<<"Enter the array to count";
string name;
getline(cin,name);

for(int i=0;i<name.length();i++)
                                {
                                 if(i==0){
                                         int cc=name[0];
                                         if(islower(cc))
                                                       {
                                                         name[0]=toupper(cc);
                                                         }
                                         }
                                 if(name[i]==' ')
                                                {
                                                 int c=name[i+1];

                                                 if(islower(c))
                                                               {

                                                                 name[i+1]=toupper(c);
                                                                 }

                                                 }
                                }


cout<<name;

}