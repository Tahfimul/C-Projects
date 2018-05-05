#include<iostream>
#include<iomanip>
using namespace std;
//Tahfimul Latif
//Program100
//Print the elements in an array set by users
//March 5, 2018

int main()
{
	int n[10];
	cout<<"Enter Elements of the array"<<endl;
	for(int i = 0; i<(sizeof(n)/sizeof(*n));i++)	
	{		
		cout<<"Element"<<setw(13)<<i<<endl;
		cin>>n[i];
	}
	for(int i=0; i<(sizeof(n)/sizeof(*n)); i++)
		cout<<"Index"<<setw(7)<<i<<"\tElement"<<setw(13)<<n[i]<<endl;
	
}
