#include<iostream>
using namespace std;
int main(){
int arr[3];
cout<<"Enter 2 array respectively";
cin>>arr[0]>>arr[1];

int sum=0;
for(int i=0;i<2;i++)
{


sum =sum+ arr[i];
if(i==1)
{
if(arr[i]==arr[i-1]){sum=sum*3;}
}

}
cout<<sum;
}