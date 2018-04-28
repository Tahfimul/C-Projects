#include<iostream>
using namespace std;
//Tahfimul Latif
//Program83
//to print the first and last numbers from the list using Do While LOOP
//March 24, 2018
int main()
{
  int w=5, i[5], e=0;

  do {
    if (w%2!=0)
    {
      e++;
      i[e] = w;
    }
    w++;
  }while (w<=14);
  cout<<"First number: "<<i[0]<<endl;
  cout<<"Last number: "<<i[4]<<endl;
  return 0;
}
