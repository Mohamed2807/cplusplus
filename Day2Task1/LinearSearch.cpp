#include<iostream>

using namespace std;

int recursion(int arr[],int val,int len1)
{
if(arr[len1]==val){return len1;}
else if(len1>5){return -1;}
else{
return recursion(arr,val,len1+1);
}



}




int main()
{
int arr[5];
cout<<"Enter array element";
for(int i=0;i<5;i++){
cin>>arr[i];}
cout<<"Enter the number of element you want to search";
int search;
cin>>search;

cout<<"the index of search value is "<<recursion(arr,search,0);
}