#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the string number";
	string num;
	cin>>num;
	string demo=" ";
	
	for(int i=0;i<num.length();i++)	
	{
		if(i>=1){
			if((int)num[i]%2==1&&(int)num[i-1]%2==1)
			{demo=demo+"-";}	
	    }
		demo=demo+num[i];
		
	}
	cout<<demo;
}