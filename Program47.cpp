#include<iostream>
using namespace std;
//Tahfimul Latif
//Program47
//to print the sum of odd numbers between 20 and 40 using FOR LOOP
//March 24, 2018
int main()
{
	int sum = 0, w = 20;
  for(w; w<=40;w++)
  {
    if(w%2!=0)
			sum+=w;
  }

	cout<<"The sum is: "<<sum<<endl;
}
