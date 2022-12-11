#include"payment.cpp"

class Admin{
	Categories c;
	public:
	Admin()
	{
		getAllProducts(c);
	}
	
	void viewAllProducts()
	{
		c.showAll();
	}
	void SelectedProducts(int num)
	{
		
		switch(num)
		{
			case 1:c.showShirts();break;
			case 2:c.showPants();break;
			case 3:c.showShoes();break;
			case 4:c.showWatches();break;
		}
	
		
	}
	void DeleteProducts(int num)
	{
	
		switch(num)
		{
			case 1:c.deleteShirts();break;
			case 2:c.deletePants();break;
			case 3:c.deleteShoes();break;
			case 4:c.deleteWatches();break;
		}
		
		
		
		
	}
	void addProducts(int num)
	{
		switch(num)
		{
			case 1:c.addShirts();break;
			case 2:c.addPants();break;
			case 3:c.addShoes();break;
			case 4:c.addWatches();break;
		}
	}
	void Shipping()
	{
		
		string name1;
		string list[500];
		string filter_list[20];
		int filter_count=0;
		int list_count=0;
		ifstream wishlist("Wishlist.txt");
		while(getline(wishlist,list[list_count])){
			list_count++;
		}cout<<"Shipping method";
		wishlist.close();
		 bool flag = true;
		cout<<"Pending lists Are\n";
		for(int k=0;k<list_count;k++)
		{
			if(list[k]=="Pending")
			{
				name1=list[k+1];
				for(int i=k+1;i<list_count;i++){
					
				 
				for(int j = 0; j < list[i].size(); j++){
				if(!isdigit(list[i][j])) flag = false;
													}
					
				 if(flag) {break;}
				 filter_list[filter_count]=list[i];	
					filter_count++;
				 cout<<list[i]<<endl;
				}
			}//if(flag) {break;}
		}
		
		cout<<"click any button to ship Their Orders";
	    char c;cin>>c;
		
		string Demo="";
		string the_rest=".txt";
		for(int i=0;i<name1.size();i++)
		{
			if(name1[i]=='='){
				for(int j=i+1;j<name1.size();j++)
				{
					
				 Demo+=name1[j];
				}
			}
		}
		
		Demo+=the_rest;
		cout<<Demo;
		
		for(int k=0;k<list_count;k++)
		{
			if(list[k]=="Pending")
			{
				list[k]="Shipped";
				
			}
		}
		ofstream wishlist1("Wishlist.txt");
		for(int k=0;k<list_count;k++)
		{wishlist1<<list[k]<<endl;}
	    string Address="C:/Users/Administrator/Desktop/C++/Day7/Task2/Bills/"+Demo;
	//cout<<Address;
	    ofstream customber(Address);
	
		for(int i=0;i<filter_count;i++)
		{
			customber<<filter_list[i]<<endl;
		}
		
		cout<<"Your order Has been Shipped.";
		
		}
		
		
	
	
};

int  selectProduct()
{
	cout<<"\n1.Shirts\n2.Pants\n3.Shoes\n4.Watches";
		int check;cin>>check;
		return check;
}

void AdminControl(string name)
{

repeat:
Admin A;
int demo;
	cout<<"--------------------Welcome " <<name<<"-----------------------";
	cout<<"\nEnter 1 for view All Products";
	cout<<"\nEnter 2 for Add Products";
	cout<<"\nEnter 3 Delete Products";
	cout<<"\nEnter 4 for view Shipping";
	cout<<"\nEnter the number=";
	int check;cin>>check;
	
	switch(check)
	{
		case 1:  A.viewAllProducts(); break;
		case 2:  demo=selectProduct();
					A.addProducts(demo);
				break;
		case 3: demo=selectProduct();
				A.DeleteProducts(demo);
				break;
		case 4:
			A.Shipping();
			break;
		default:cout<<"\nEnter the valid choices";
	}
	
	cout<<"\npress 1 for Continue";
	int con;cin>>con;
	if(con==1) goto repeat;
	
}
