#include<iostream>
#include<cmath>
using namespace std;
//Tahfimul Latif
//Program16
//to print solutions of a, b, c values using the quadratic formula
//March 10, 2018
int main()
{
	float a, b, c, d, x, x1, x2;
	cout<<"Input values of a, b, c"<<endl;
	cin>>a>>b>>c;
	if(a == 0)
		if(b==0)
			if(c==0)
				cout<<"All solutions"<<endl;
			else
				cout<<"No Solution"<<endl;
		else
		{
			cout<<"Linear"<<endl;
			x=(-1)*c/b;
			cout<<x;
		}
	else
	{
		d = pow(b,2)-4*a*c;
		if(d>0)
		{
			cout<<"No Solution"<<endl;
			x1=(((-1)*b)+sqrt(d))/(2*a*c);
			x2=(((-1)*b)-sqrt(d))/(2*a*c);
			cout<<x1<<x2;
		}
		else
			if(d==0)
			{
				cout<<"Duplicate"<<endl;
				x = b/(2*a);
				cout<<x;
			}
			else
				cout<<"No Solution"<<endl;
	}

}
