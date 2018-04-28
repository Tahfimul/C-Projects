#include<iostream>
using namespace std;
//Tahfimul Latif
//Program49
//To print the sum of multiples of 5 between 1 and 21 using FOR LOOP
//March 24, 2018
int main() {
  int w=1, sum=0;
  for(w; w<=21;w++)
  {
    if (w%5 == 0)
      sum+=w;
  }
  cout<<"The sum is: "<<sum<<endl;
  return 0;
}
