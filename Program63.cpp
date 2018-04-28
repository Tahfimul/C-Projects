#include<iostream>
using namespace std;
//Tahfimul Latif
//Program63
//to print odd number from 19 to -5 using Do While LOOP
//March 24, 2018
int main()
{
	int w = 19;
	do
	{
		if(w%2 != 0)
			cout<<w<<endl;
		w--;
	}while(w>=-5);
}
