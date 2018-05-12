#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 106
//1) To print the original array of 3x4 elements
//2) To change all the elements of column 2 to 0. Then print the new array
//May 12, 2018

int main()
{
	int A[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	cout<<"The original array is:"<<endl;
	for (int i =0; i<3; i++)
	{
		for(int j=0; j<4; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<"The new formed array is: "<<endl;
	for (int i =0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			A[i][1] = 0;
			cout<<A[i][j]<<" ";
		}
		cout<<endl;	
	}
	

}
