#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ofstream file("number.txt");
	file<<1<<endl;
	file<<2<<endl;
	file<<3<<endl;
	file<<4<<endl;
	file<<5<<endl;
	file<<6<<endl;
	file<<7<<endl;
	file<<8<<endl;
	file<<9<<endl;
	file<<0<<endl;
	file.close();
	ifstream read("number.txt");
	int txt[10];int count1=0;
	while(read>>txt[count1])
	{
		count1++;
		cout<<txt[count1-1]<<endl;
	}
	read.close();
	ofstream odd("odd.txt");
	ofstream even("even.txt");
	
	for(int i=0;i<count1;i++)
	{
		if(txt[i]%2==0) even<<txt[i]<<endl;
		else odd<<txt[i]<<endl;
	}
	odd.close();
	even.close();
	


	return 0;
}