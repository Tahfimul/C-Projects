#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program 94
//Create two functions (square and cube) which return the square root and cube root for an integer
//April 28, 2018

int square(int num)
{
	return pow(num,2);
}

int cube(int num)
{
	return pow(num,3);
}
int main()
{
	int num =0;
	cout<<"Please enter a number: "<<endl;
	cin>>num;
	cout<<"the square of = "<<num<<" is "<<square(num)<<endl;
	cout<<"the cube of = "<<num<<" is "<<cube(num)<<endl;
}

