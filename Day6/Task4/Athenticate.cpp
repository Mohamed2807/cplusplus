#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;



int main()
{
	string username;
	cout<<"Enter your username\n";
	cin>>username;
	string password;
	cout<<"Enter your password\n";
	cin>>password;
	
	int len=password.length();
	char pass[len];
	strcpy(pass,password.c_str());
	try{
		if(len<6) throw("The password must be more than 6 words");
		int check=0;
	 for(int i=0;i<len;i++)
	 {
		 if(isdigit(pass[i])){check=1;}
	 }
	
			if(check==0) throw("The given password doest not contain the digit ");
	

	}
	catch(char const* ca){
		cout <<ca; 
	}
	
}