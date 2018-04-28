#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program 11
//Print the following 5*2-6
//March 3, 2018
int main()
{
	int a,b,c,d,e,result;
	a = 5;
	b = 2;
	c = 6;
	result = 5*2+6;
	cout<<"The result of "<<"5*2+6"<<" is "<<result<<endl;
	result=a+b*c;
	cout<<"The result of "<<"5+2*6"<<" is "<<result<<endl;
	result=(a+b)*c;
	cout<<"The result of "<<"(5+2)*6"<<" is "<<result<<endl;
	float cVal = 6.0;
	result = a+(a+b)*pow(c,b)-a%a;
	cout<<"The result of "<<"5+(2+5)*(6^2)-5%5"<<" is "<<result<<endl;
	a = 10;
	d = 9;
	e = 5;
	result = a/b+a%c-d*e%e-e;
	cout<<"The result of "<<"10/2+10%6-9*5%5-5"<<" is "<<result<<endl;
	a = 0;
	result = (a) * (e%e);
	cout<<"The result of "<<"(0)*(5%5)"<<" is "<<result<<endl;
}
