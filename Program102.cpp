#include<iostream>
#include<iomanip>
using namespace std;
//Tahfimul Latif
//Program102
//Create a table of 5 Rows && 3 Columns and Print the elements of the second column of the table
//May 5, 2018

int main()
{
	int multiDimensionalArray[5][3] = {{5,6,7},{3,9,0},{5,0,1},{7,9,3},{6,2,6}};
	for(int i=0; i<sizeof(multiDimensionalArray)/sizeof(*multiDimensionalArray); i++)
	{
		for(int j=0; j<3; j++)
			if(j==1)			
				cout<<setw(5)<<"|"<<multiDimensionalArray[i][j]<<"|"<<setw(5);
			
		cout<<endl;
	}
}
