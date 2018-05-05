#include<iostream>
#include<iomanip>
using namespace std;
//Tahfimul Latif
//Program101
//Print an array of 5 Rows && 3 Columns
//May 5, 2018

int main()
{
	int multiDimensionalArray[5][3] = {{5,6,7},{3,9,0},{5,0,1},{7,9,3},{6,2,6}};
	for(int i=0; i<sizeof(multiDimensionalArray)/sizeof(*multiDimensionalArray); i++)
	{
		for(int j=0; j<3; j++)
			cout<<setw(5)<<"|"<<multiDimensionalArray[i][j]<<"|"<<setw(5);
			
		cout<<endl;
	}
}
