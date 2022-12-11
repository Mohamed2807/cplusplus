#include<iostream>
using namespace std;
string mobile[10];
int price[10];
	int count1=0;
class Mobile
{
	
	public:
	virtual void set(string Mob,int price1)=0;
	virtual void detect(int amount)=0;
	
};
class Rate:public Mobile
{
	void set(string Mob,int price1)
	{
	mobile[count1]=Mob;
	price[count1]=price1;
count1++;	
	}
	void detect(int amount)
	{
		for(int i=0;i<count1;i++)
		{
			if(price[i]<=amount)
			{
				cout<<"\n"<<mobile[i]<<"    "<<price[i]<<"Rs";
			}
		}
	}
};
int main()
{
	Mobile *mobile;
	Rate rate;
	mobile=&rate;
	
	mobile->set("SamsungA50",20000);
	mobile->set("SamsungA30",18000);
	mobile->set("SamsungA70",30000);
	mobile->set("OnePlus7t",40000);
	mobile->set("OnePlus8t",50000);
	mobile->set("SamsungNote11",100000);
	mobile->set("Iphone12",150000);
	mobile->set("Iphone13",200000);
	cout<<"Price detection Amount";
	int a;cin>>a;
	mobile->detect(a);
	
	
}