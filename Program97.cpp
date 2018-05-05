#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 97
//print values in an array
//May 5, 2018
int A[5] = {5, 6, -9, 8, 14};
int main()
{
	for(int i = 0; i<sizeof(*A)+1; i++)
	{
		cout<<A[i]<<endl;
	}
}
