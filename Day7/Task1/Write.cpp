#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ofstream file("Demo1.txt");
	
		file<<"Welcome to the filestream\n\n";
		file<<"Hello Its Mohamed ASHIK";
		file.close();

	return 0;
}