#include<iostream>
using namespace std;
//Tahfimul Latif
//Program37
//to print the sum of a list of 5 numbers: 3, 2, -7, 19, -18
//March 24, 2018
int main()
{
  int w=1, num=0, sum=0;
  cout<<"Please input a list of 5 numbers: ";
  while(w<=5)
  {
    cin>>num;
    sum+=num;
    w++;
  }
  cout<<"The sum of your list is: "<<sum<<endl;
  return 0;
}
