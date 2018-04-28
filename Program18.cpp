#include<iostream>
using namespace std;
//Tahfimul Latif
//Program18
//to utilize switch statement
//March 17, 2018
int main()
{
	int a;
	cout<<"Please input a number: \n";
	cin>>a;

	switch(a)
	{
		case 3:
			cout<<"You input the number:"<<a<<endl;
			break;
		case 5:
			cout<<"You input the number:"<<a<<endl;
			break;
		case 7:
			cout<<"You input the number:"<<a<<endl;
			break;
		default:
			cout<<"Others\n";
			break; //Optional
	}
}
