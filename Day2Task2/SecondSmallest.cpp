#include<iostream>
using namespace std;
int main(){
int len;
cout<<"Enter the length of the Array";
cin>>len;
int arr[len];
cout<<"Enter  array respectively";



for(int i=0;i<len;i++)
{cin>>arr[i];}




for(int i=0;i<len;i++)
{
for(int j=i+1;j<len;j++)
{
if(arr[i]>arr[j]){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}}

cout<<"The second Smallest array is "<<arr[1];

}