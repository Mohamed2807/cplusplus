#include<iostream>
using namespace std;

	template<class T>
	T sum1(T arr[],T initial,T end,T init)
	{
		T val=0;
		for(int i=initial-1;i<end;i++)
		{
			val+=arr[i];
			
		}
		return val;
	}
	
	

 int main()
 {
	cout<<"enter the length of the array";
	
	int len;
	cin>>len;
	int arr[len];
	int init=10;
	
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	int tot=sum1(arr,5,8,init);
	cout<<"the sum of specified array is" <<tot<<endl;

	
	
	
	
 }
	 
	 
