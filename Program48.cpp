#include<iostream>
using namespace std;
//Tahfimul Latif
//Program48
//to print the sum of even numbers between 19 and 21 using FOR LOOP
//March 24, 2018
int main()
{
	int sum=0, w=19;
  for(w;w<=21;w++)
  {
    if(w%2==0)
			sum+=w;
  }
	cout<<"The sum is: "<<sum<<endl;
}
