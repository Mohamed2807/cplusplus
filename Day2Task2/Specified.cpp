#include<iostream>
using namespace std;
main(){
int len,num;
cout<<"Enter the Specified Number";
cin>>num;
cout<<"Enter the length of the Array";
cin>>len;
int arr[len];
cout<<"Enter  array respectively";

for(int i=0;i<len;i++)
{
cin>>arr[i];
}
for(int i=0;i<len;i++){
if(i>=1){
if((arr[i]+arr[i-1])==num){
cout<<"the pair of "<<arr[i-1]<<" "<<arr[i]<<"is the total of "<<num<<endl;}
}
}

}
