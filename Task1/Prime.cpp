#include<iostream>
using namespace std;

class Demo
{
public:
int Prime(int val){
int m=val/2;
int check=0;

       for(int i=2;i<m;i++)
                           {
                           if(val%i==0){check=1;}

                            }
if(check==0)return val;
else return 0;

}};

int main()
{
int val,j;j=0;
cout<<"Enter the number =";cin>>val;
 int arr[val];
 Demo d;
for(int i=val;i>2;i--){
 arr[j]=d.Prime(i);j++;
}
int pri[100];int count=0;
for(int i=0;i<j;i++)
{

if(arr[i]!=0){
pri[count]=arr[i];count++;}
}

for(int i=0;i<count;i++)
{
if((pri[i]-pri[i+1])==2){
cout<<"The biggest twin of prime is "<<pri[i];break;}
}








}