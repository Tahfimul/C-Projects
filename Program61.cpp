#include<iostream>
using namespace std;
//Program61 to check if -7 exits on the list using FOR LOOP

int main()
{
  int w=5, i[5], e=0;
  bool exists = false;
  for (w; w<=14; w++) {
    if (w%2!=0) {
      i[e++] = w;
      if(i[e] == -7)
        exists = true;
      if(i[e]!=-7)
        exists = false;
    }
  }
  if(exists==true)
    cout<<"-7 Does exist on the list\n";
  if(exists==false)
    cout<<"-7 Does not exist on the list\n";
}
