#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 15
//to compute and output solutions of coefficients of a linear equation
//March 10, 2018
int main()
{
	float a, b, x;
	cout<<"input for a & b"<<endl;
	cin>>a>>b;
	if(a==0)
		if(b==0)
			cout<<"All Solution";
		else
			cout<<"No Solution";
	else
	{
		cout<<"One Solution";
		x=(-1*b)/a;
		cout<<x;
	}
	return 0;
}
