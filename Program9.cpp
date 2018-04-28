#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 9
//to print the sum, product, difference of 2 numbers
//March 3, 2018
int main()
{
	int a, b, sum, product, difference;
	cout<<"Please input a number:\n";
	cin>>a;
	cout<<"Please input another number:\n";
	cin>>b;
	sum = a + b;
	cout<<"The sum of "<<a<<" + "<<b<<" is "<<sum<<endl;
	product = a * b;
	cout<<"The product of "<<a<<" * "<<b<<" is "<<product<<endl;
	difference = a - b;
	cout<<"The difference of "<<a<<"-"<<b<<" is "<<difference<<endl;
}
