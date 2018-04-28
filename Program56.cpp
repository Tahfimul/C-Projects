#include<iostream>
using namespace std;
//Tahfimul Latif
//Program56
//to print the positive numbers of a list of 5 numbers: 3, 2, -7, 19, -18 using FOR LOOP
//March 24, 2018
int main()
{
  int w=0,i[5] = {0 , -1, 2, -4, 5};
  for(w; w<=4; w++)
  {
    if (i[w] >= 0) {
      cout<<i[w]<<endl;
    }
  }
  return 0;
}
