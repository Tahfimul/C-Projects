#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program 94
//Create two functions (square and cube) which return the square root and cube root for an integer
//April 28, 2018

int square(int & num)
{
	return num = sqrt(num);
}

int cube(int & num)
{
	return num = cbrt(num);
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

