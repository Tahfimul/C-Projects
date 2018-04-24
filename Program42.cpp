#include<iostream>
using namespace std;
//Tahfimul Latif
//Program42
//to print every other number on the list
//March 24, 2018
int main()
{
  int w=5, i[5], e=0;
  while (w<=14) {
    if (w%2!=0) {
      e++;
      i[e] = w;
      cout<<i[e]<<endl;
    }
    else
    {
      cout<<"\n";
    }

    w++;
  }
  return 0;
}
