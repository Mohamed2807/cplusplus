#include<iostream>
using namespace std;
int main(){
int len;
cout<<"Enter the length of the Array";
cin>>len;
int arr[len];
cout<<"Enter  array respectively";
bool check=true;


for(int i=0;i<len;i++)
{cin>>arr[i];}


cout<<"The Unique Elements Array";

for(int i=0;i<len;i++)
                      {
                      check=true;
                      if(arr[i]==0){continue;}
                      for(int j=i+1;j<len;j++){
                                              if(arr[i]==arr[j]){
                                                                 check=false;
                                                                 arr[j]=0;

                                                                 }
                                               }
                       if(check){cout<<arr[i]<<"  ";}
                       }








}