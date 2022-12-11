#include<iostream>
#include <stdio.h>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("Delete.txt");
	
	file<<"aaa aaa  aaa aaaa"<<endl;
	file<<"bbbbbb bbbbbb bbbb"<<endl;
	file<<"cccccccc ccccc cccc"<<endl;
	file<<"dddd dddddd dddddd"<<endl;
	file<<"a b c d"<<endl;
	file<<"aeeeee e eeeeee ee"<<endl;
	file<<"fffffff ffffff ffff"<<endl;
	file<<"gggg gggggg gggggg g"<<endl;
	file.close();
	cout<<"enter the line you want search"<<endl;
	string search;
	getline(cin,search);
	
	ifstream read("Delete.txt");
	string txt[10];
	int count1=1;
	int initial;

	while(getline(read,txt[count1]))
	{
		if(txt[count1]==search){
			cout<<"The line founded\n";
			initial=count1;
			}
		count1++;
	}
	
	
	
	ofstream file1("Delete.txt");
	for(int i=0;i<count1;i++)
	{
		if(i==initial)
		{
			cout<<"\nthe removed word is "<<txt[i];
			
			i++;
		}
		file1<<txt[i]<<endl;
	}
;


	
	cout<<"\n\nthe line is Deleted";
}