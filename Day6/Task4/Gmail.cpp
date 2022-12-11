#include<iostream>
#include<string.h>
using namespace std;



int main()
{
	string email;
	cout<<"Enter your email\n";
	cin>>email;
	
	int len=email.length();
	char mail[len];
	strcpy(mail,email.c_str());
	try{
		int check=0;
	 for(int i=0;i<len;i++)
	 {
		 if(mail[i]=='@'){check=1;}
	 }
	
			if(check==0) throw("The given mail does not have @symbol ");
	

	}
	catch(char const* ca){
		cout <<ca; 
	}
	
}