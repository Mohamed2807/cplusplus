#include<iostream>
using namespace std;
class Bank
{
	protected:
	int balance;
	public:
	int getBalance(){
		
		return 0;
	}
};
class BankA:public Bank{
    	public:
     BankA(int amount)
	 {
		 
		this->balance =amount;
	 }
	int getBalance(){		
		return balance;
	}
};class BankB:public Bank{
    	public:
     BankB(int amount)
	 {
		 
		this->balance =amount;
	 }
	int getBalance(){		
		return balance;
	}
};
class BankC:public Bank{
       	public:
     BankC(int amount)
	 {
		 
		this->balance =amount;
	 }
	int getBalance(){		
		return balance;
	}
};


int main()
{
	BankA b1(1000);
	BankB b2(1500);
	BankC b3(2000);
	
	cout<<"the BankA Balance is  "<<b1.getBalance()<<endl;
	cout<<"the BankB Balance is  "<<b2.getBalance()<<endl;
	cout<<"the BankC Balance is  "<<b3.getBalance();
	
return 0;
	
}