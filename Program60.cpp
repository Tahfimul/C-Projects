#include<iostream>
using namespace std;
//Program60 to print every other number on the list using FOR LOOP
int main()
{
  int w=5, i[5], e=0;
  for (w; w<=14; w++) {
    if (w%2!=0) {
      i[e++] = w;
    }
  }
  cout<<i[0]<<endl;
  cout<<i[2]<<endl;
  cout<<i[4]<<endl;
  return 0;
}
