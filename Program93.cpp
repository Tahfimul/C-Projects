#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program 93
//Create two functions (square and cube) which compute the square root and cube root for an integer
//April 28, 2018

void square(int & num)
{	
	cout<<"the square of = "<<num<<" is "<<pow(num,2)<<endl;
}

void cube(int & num)
{	
	cout<<"the cube of = "<<num<<" is "<<pow(num, 3)<<endl;
}
int main()
{
	int num = 0;
	cout<<"Please enter a number: "<<endl;
	cin>>num;
	square(num);
	cube(num);
}

