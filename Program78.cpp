#include<iostream>
using namespace std;
//Program78 to check if -7 exits on the list using Do While LOOP

int main()
{
  int w=5, i[5], e=0;
  bool exists = false;
  do {
    if (w%2!=0) {
      e++;
      i[e] = w;
      if(i[e] == -7)
        exists = true;
      if(i[e]!=-7)
        exists = false;
    }

    w++;
  }while (w<=14);
  if(exists==true)
    cout<<"exists\n";
  if(exists==false)
    cout<<"Does not exist\n";
}
