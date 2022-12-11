#include<iostream>
using namespace std;
int main(){
int arr[3];
cout<<"Enter 2 array respectively";

bool check=false;
int sum=0;
for(int i=0;i<2;i++)
{
cin>>arr[i];
}
for(int i=0;i<2;i++)
{
if(arr[i]==30){check=true;break;}
if(i==1){
if((arr[i]+arr[i-1])==30){check=true;break;}
}
}

cout<<check;

}