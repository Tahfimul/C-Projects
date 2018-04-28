#include<iostream>
using namespace std;
//Program64 to print the sum of numbers between 19 and 31 using Do While LOOP

int main()
{
	int w=19, sum=0;
	do
	{
		sum+=w;
		w++;
	}while(w<=31);
	cout<<"The sum is"<<sum<<endl;
}
