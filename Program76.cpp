#include<iostream>
using namespace std;
//Program76 to print the first and last numbers from the list using Do While LOOP
int main()
{
  int w=5, i[5], e=0;

  do {
    if (w%2!=0)
    {
      i[e++] = w;
    }
    w++;
  }while (w<=14);
  cout<<"First number: "<<i[0]<<endl;
  cout<<"Last number: "<<i[4]<<endl;
  return 0;
}
