#include<iostream>
using namespace std;
//Tahfimul Latif
//Program105
//To print the sum of the even numbers in the 3rd row of a 4x4 array
//May 12, 2018

int main()
{
	int A[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14, 15, 16}};
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{	
		cout<<i<<endl;
		for(int j=0; j < 4; j++)				
			if(i==2 && (A[i][j]%2 == 0))
			{
				cout<<A[i][j]<<"j"<<endl;
				sum+=A[i][j];
			}			
		
	}
	cout<<"Sum of 3rd row is:"<<sum;
}
