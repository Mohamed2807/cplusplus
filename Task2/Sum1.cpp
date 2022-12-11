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
if(i==1){
if((arr[i]+arr[i-1])>30){sum=30;break;}
else{sum=(arr[i]+arr[i-1]);break;}}
}

cout<<sum;

}