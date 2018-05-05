#include<iostream>
#include<iomanip>
using namespace std;
//Tahfimul Latif
//Program103
////Create a table of 5 Rows && 3 Columns and Print the sum of the elements of row 4 of the table
//May 5, 2018

int main()
{
	int multiDimensionalArray[5][3] = {{5,6,7},{3,9,0},{5,0,1},{7,9,3},{6,2,6}}, sum=0;
	for(int i=0; i<sizeof(multiDimensionalArray)/sizeof(*multiDimensionalArray); i++)
	{	
		if(i==3)
		{
			for(int j=0; j<3; j++)	
				sum+= multiDimensionalArray[i][j];		
			cout<<setw(5)<<"The sum of the elements in row 4 is: "<<sum<<"|"<<setw(5);	
		}
	}	
}
