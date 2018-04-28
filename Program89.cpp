#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 89
//Passing parameters a and b by value
//April 28, 2018
void f(int x, int y)
{
	x=88;
	y=99;
}
int main()
{
	int a = 22;
	int b = 33;
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	f(a,b);
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	return 0;
}
