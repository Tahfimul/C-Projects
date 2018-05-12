#include<iostream>
using namespace std;
//Tahfimul Latif
//Program107
//Struct

struct address
{
	string address;
	string owner;
};

int main()
{
    address personA;
	cout<<"Please enter the name of the person"<<endl;
	cin>>personA.owner;
	cout<<"Please enter the address of the person"<<endl;
	cin>>personA.address;
	cout<<personA.owner<<"'s address is "<<personA.address;
}
