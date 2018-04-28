#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program 95
//To compute the circumference and area of a circle using a function called computingCircle which will return more than one value because of the power of passing parameters by reference
//April 28, 2018
void computingCircle(double &area, double &circumference, double r)
{
	const double pi = 3.141592;
	area = pi * pow(r,2);
	circumference = 2*pi*r;
}

int main()
{
	double r1, a, c;
	cout<<"Enter radius of circle"<<endl;
	cin>>r1;
	computingCircle(a, c, r1);
	cout<<"Area = "<<a<<endl
		<<"Circumference = "<<c<<endl;
	system("pause");
	return 0;
}

