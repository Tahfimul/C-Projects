#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 98
//the sum of the array
//May 5, 2018
int A[5] = {5, 6, -9, 8, 14}, sum;
int main()
{
	for(int i = 0; i<sizeof(*A)+1; i++)
	{
		sum+=A[i];
	}
	cout<<"The sum of the array is:"<<sum<<endl;
}
