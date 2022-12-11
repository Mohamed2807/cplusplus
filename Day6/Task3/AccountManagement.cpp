#include<iostream>
#include<vector> 
using namespace std;

class payment
{
	vector<string> s;
	public:
	payment(vector<string> v)
	{
		this->s=v;
		
	}
	void  add(vector<string> v)
	{
		
		string txt;
		cout<<"Enter the Student name ";
		cin>>txt;
		s.push_back(txt);
	
	}
	vector<string> get()
	{
		return s;
	}
	vector<string>  payfees(vector<string> v,string name)
	{
		for(int i=0;i<this->s.size();i++)
		{
			if(this->s[i]==name)
			{
				cout<<"detail found";
				cout<<"Student:"<<this->s[i]<<endl;
				cout<<"status:unpaid"<<endl;
				
				cout<<"press 1 to pay the fees\n Fees amount is 2000 :";
				int a;cin>>a;
				if(a==1)
				{
					v.push_back(this->s[i])	;
				
					this->s.erase(s.begin()+i);
					
				
				}
				break;
			}
		}
		return v;
	}
	
	
	
	
	
	
};
vector<string>  unpaid(){
	vector<string> v ;
	
	v.push_back("srikanth");
	
	v.push_back("prasanth");

	
	return v;
	
}

vector<string>paid()
{
	vector<string> v ;
	v.push_back("Ravi");
	
	v.push_back("Devi");
	


	return v;
}
void call(){}


int main(){
	vector <string> Stu_unpaid;
	vector <string> Stu_paid;
	Stu_unpaid=unpaid();
	Stu_paid=paid();
		payment s(Stu_unpaid);
	    payment s1(Stu_paid);

     
	
	menu:
int a;

cout<<"1.Students \n2.Admin=";
	

cin>>a;
	if(a==1)
	{
		repeat1:
		cout<<"1.pay fees \n2.verify\n3. Exit menu=";
		int b;cin>>b;string name;
		switch(b)
		{
			case 1: cout<<"Enter your name";
					cin>>name;
					Stu_paid=s.payfees(Stu_paid,name);
					Stu_unpaid=s.get();
			goto repeat1;
					break;
			case 2:  
					for(int i=0;i<Stu_paid.size();i++)
					{
		
						cout<<Stu_paid[i]<<endl;
					cout<<"unpaid"<<endl;
					}
					for(int i=0;i<Stu_unpaid.size();i++)
					{
		
						cout<<Stu_unpaid[i]<<endl;
					cout<<"unpaid"<<endl;
					}
				goto repeat1;
			        break;
			case 3: goto menu;
			
		}
		
		
	}else if(a==2)
	{
               repeat:
		cout<<"1.paid Student \n2.Unpaid Student\n Exit to admin=";
		int b;cin>>b;string name;
		switch(b)
		{
			case 1: 
				for(int i=0;i<Stu_paid.size();i++)
					{
		
						cout<<Stu_paid[i]<<endl;
						cout<<"status:paid"<<endl;
					}
						goto repeat;
					break;
			case 2:  
					
					for(int i=0;i<Stu_unpaid.size();i++)
					{
		
						cout<<Stu_unpaid[i]<<endl;
						cout<<"status:unpaid"<<endl;
                                           goto repeat;
						break;
					}
			case 3: goto menu;
		}
			
	}
	
	
	

	

	
	
}
