#include<iostream>
#include <string.h>
#include <sstream>
using namespace std;

	template<class T,class U>
	T sum1(U *val1,T len1)
	{
	
		int sum1=0;
		cout<<len1;int a;
		
		for(int i=0;i<len1;i++)
		{
			sum1+=val1[i]-'0';
			
			
		}
		return sum1;
	}
	
	

 int main()
 {

    char num[19]="23456";
	
	


int len=strlen(num);
	
	cout<<"the String to int  is" <<sum1<int,char>(num,len)<<endl;

	
	
	
	
 }
	 
	 
