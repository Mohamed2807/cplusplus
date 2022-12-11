#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ofstream file("append.txt",ios::app);
	file<<"append1"<<endl;
	file<<"append2"<<endl;
	file<<"append3"<<endl;
	file<<"append4"<<endl;
	file<<"append5"<<endl;
	file.close();

	

	
	


	return 0;
}