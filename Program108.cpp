#include<iostream>
using namespace std;
//Tahfimul Latif
//Program108
//Class
//May 12, 2018

class address
{
	public :
		string owner;
		string address;
};

int main()
{
	address person;
	
	cout<<"Please enter the name of the owner: "<<endl;
	cin>>person.owner;
	cout<<"Please enter the address of "<<person.owner<<endl;
	cin>>person.address;
	cout<<person.owner<<"'s address is "<<person.address<<endl;
}

