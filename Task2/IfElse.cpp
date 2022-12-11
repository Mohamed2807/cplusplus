#include<iostream>
#include<string>
#include  <bits/stdc++.h>
using namespace std;
int main(){
string a="if";
char name[10];
cout<<"Enter the name given";
 cin.getline(name,10);
for(int i=0;i<a.length();i++){
              if(name[i]!=a[i]){cout<<a<<" "<<name;break;}
else{cout<<name;break;}

}
}