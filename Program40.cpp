#include<iostream>
using namespace std;
//Tahfimul Latif
//Program40
//to print the odd numbers of a list of 5 numbers: 3,2,-7,19,-18 between 5 and 14
//March 24, 2018
int main()
{
  int w=5;
  while (w<=14) {
    if (w%2!=0) {
      cout<<w<<endl;
    }
    w++;
  }
  return 0;
}
