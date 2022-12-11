#include<iostream>
using namespace std;
int main(){
int arr[5];
cout<<"Enter  array respectively";

bool check=true;
int sum=0;
for(int i=0;i<5;i++)
{cin>>arr[i];}




for(int i=0;i<5;i++)
{
if(i>1){
if(arr[i]<arr[i-1]){check=false;}
}}

cout<<check;
}