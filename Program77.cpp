#include<iostream>
using namespace std;
//Program77 to print every other number on the list using Do While LOOP
int main()
{
  int w=5, i[20], e=0;
  do {
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
  } while (w<=14);
  return 0;
}
