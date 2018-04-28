#include<iostream>
using namespace std;
//Tahfimul Latif
//Program59
//to print the first and last numbers from the list using FOR LOOP
//March 24, 2018
int main()
{
  int w=5, i[5], e=0;

  for(w; w<=14; w++) {
    if (w%2!=0)
    {
      i[e++] = w;
    }
  }
  cout<<"First number: "<<i[0]<<endl;
  cout<<"Last number: "<<i[4]<<endl;
  return 0;
}
