#include<iostream>
#include<iomanip>
using namespace std;
//Tahfimul Latif
//Program104
//Write a program to swap the 2nd and 3rd element of Array A {5,2,10,-9,6}, so that the new array is A{5,10,2,-9,6}
int main()
{
	int A[5] = {5,2,10,-9,6}, temp=0;
	cout<<"The current array is: "<<endl;
	for(int i = 0; i<(sizeof(A)/sizeof(*A)); i++)
		cout<<setw(2)<<"|"<<A[i]<<"|";
	
	temp = A[1];
	A[1] = A[2];
	A[2] = temp;
    cout<<"The newly swapped array is: "<<endl;
	for(int i = 0; i<(sizeof(A)/sizeof(*A)); i++)
		cout<<setw(2)<<"|"<<A[i]<<"|";
		
			
		 	
}
