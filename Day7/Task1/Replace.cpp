#include<iostream>
#include <stdio.h>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("replace.txt");
	
	file<<"aaaaaa bbbbbb"<<endl;
	file<<"cccccc ddddddd "<<endl;
	file<<"eeeeee eeeeeeee"<<endl;
	file<<"fffffff gggggg hhhhhhh"<<endl;
	file<<"a b c d"<<endl;
	file<<"jjjjjjj"<<endl;
	file<<"kkkkkkkkkk"<<endl;
	file<<"lllllllllllll"<<endl;
	file.close();
	cout<<"enter the word you want search"<<endl;
	string search;
	cin>>search;
	
	ifstream read("replace.txt");
	string txt[100];
	int count1=1;
	int initial;

	while(read>>txt[count1])
	{
		if(txt[count1]==search){
			cout<<"The word founded\n";
			initial=count1;
			}
		count1++;
	}
	cout<<"Enter the replaceble word\n";
	string replace;
	cin>>replace;
	
	
	ofstream file1("replace.txt");
	for(int i=0;i<count1;i++)
	{
		if(i==initial)
		{
			cout<<"\nthe removed word is "<<txt[i];
			file1<<replace<<endl;
			i++;
		}
		file1<<txt[i]<<endl;
	}
;


	
	cout<<"\n\nthe line is replaced";
}