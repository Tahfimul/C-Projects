#include<iostream>
using namespace std;
//Tahfimul Latif
//Program64
//to print the sum of numbers between 19 and 31 using Do While LOOP
//March 24, 2018
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
