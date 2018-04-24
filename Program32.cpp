#include<iostream>
using namespace std;
//Tahfimul Latif
//Program 32
//To print the sum of multiples of 5 between 1 and 21
//March 24, 2018 
int main() {
  int w=1, sum=0;
  while (w<=21) {
    if (w%5 == 0)
      sum+=w;
    w++;
  }
  cout<<"The sum is: "<<sum<<endl;
  return 0;
}
