#include<iostream>
#include<iomanip>
using namespace std;
//Tahfimul Latif
//Program102
//Create a table of 5 Rows && 3 Columns and Print the elements of the second column of the table
//May 5, 2018

int main()
{
	int multiDimensionalArray[5][3] = {{5,6,7},{3,9,0},{5,0,1},{7,9,3},{6,2,6}}, sum=0;
	for(int i=0; i<sizeof(multiDimensionalArray)/sizeof(*multiDimensionalArray); i++)
	{
		if(i==3)
		{
		    for(int j=0; j<3; j++)	
			{
				sum+=multiDimensionalArray[i][j];
			}		
			cout<<setw(5)<<"The sum of row 4 is: "<<sum<<endl;
		}
	}
}
