#include<iostream>
using namespace std;
//Program63 to print odd number from 19 to -5 using Do While LOOP

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
