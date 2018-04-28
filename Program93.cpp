#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program 93
//Create two functions (square and cube) which compute the square root and cube root for an integer
//April 28, 2018

void square(int & num)
{
	num = sqrt(num);
}

void cube(int & num)
{
	num = cbrt(num);
}
int main()
{
	int num = 81;
	cout<<"num = "<<num<<endl;
	square(num);
	cout<<"num square root = "<<num<<endl;
	cube(num);
	cout<<"num cube root = "<<num<<endl;
}

