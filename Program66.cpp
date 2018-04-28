#include<iostream>
using namespace std;
//Program31 to print the sum of even numbers between 19 and 21 using Do While LOOP

int main()
{
	int sum=0, w=19;
	do
	{
		if(w%2==0)
			sum+=w;
		w++;
	}while(w<=21);
	cout<<"The sum is"<<sum<<endl;
}
