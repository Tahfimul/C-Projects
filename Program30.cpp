#include<iostream>
using namespace std;
//Tahfimul Latif
//Program30
//to print the sum of odd numbers between 20 and 40
//March 24, 2018
int main()
{
	int sum = 0, w = 20;
	while(w<=40)
	{
		if(w%2!=0)
			sum+=w;
		w++;
	}

	cout<<"The sum is"<<sum<<endl;
}
