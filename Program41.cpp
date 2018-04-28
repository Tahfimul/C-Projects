#include<iostream>
using namespace std;
//Tahfimul Latif
//Program41
//to print the first and last numbers from the list
//March 24, 2018
int main()
{
  int w=5, i[5], e=0;

  while (w<=14) {
    if (w%2!=0)
    {
      e++;
      i[e] = w;
    }
    w++;
  }
  cout<<"First number: "<<i[0]<<endl;
  cout<<"Last number: "<<i[4]<<endl;
  return 0;
}
