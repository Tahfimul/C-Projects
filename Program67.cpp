#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 63
//To print the sum of multiples of 5 between 1 and 21 using Do While LOOP
//March 24, 2018
int main() {
  int w=1, sum=0;
  do {
    if (w%5 == 0)
      sum+=w;
    w++;
  } while (w<=21);
  cout<<"The sum is: "<<sum<<endl;
  return 0;
}
