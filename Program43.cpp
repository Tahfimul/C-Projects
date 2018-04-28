#include<iostream>
using namespace std;
//Tahfimul Latif
//Program43
//to check if -7 exits on the list
//March 24, 2018
int main()
{
  int w=5, i[5], e=0;
  bool exists = false;
  while (w<=14) {
    if (w%2!=0) {
      i[e++] = w;
      if(i[e] == -7)
        exists = true;
      if(i[e]!=-7)
        exists = false;
    }

    w++;
  }
  if(exists==true)
    cout<<"exists\n";
  if(exists==false)
    cout<<"Does not exist\n";
}
