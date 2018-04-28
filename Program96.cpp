#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program 96
//To compute the circumference and area of a circle using dedicated functions for computing area and circumference of circle
//April 28, 2018
const double pi = 3.141592;
void area(double &area, double r)
{
	area = pi * pow(r,2);
}

void circumference(double &circumference, double r)
{
	circumference = 2*pi*r;
}

int main()
{
	double r1, a, c;
	cout<<"Enter radius of circle"<<endl;
	cin>>r1;
	area(a, r1);
	circumference(c, r1);
	cout<<"Area = "<<a<<endl
		<<"Circumference = "<<c<<endl;
	system("pause");
	return 0;
}

