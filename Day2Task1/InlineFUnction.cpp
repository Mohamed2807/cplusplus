#include<iostream>

using namespace std;

static inline int great(int a,int b){

return(a>b)?a:b; 
}




int main()
{
cout<<"Enter the 2 numbers respectively";
int a,b;
cin>>a>>b;
int c=great(a,b);
cout<<"The greater number is "<<c;

}