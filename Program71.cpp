#include<iostream>
using namespace std;
//Program71 To print a list of 5 numbers: 3, 2, -7, 19, -18 using Do While LOOP

int main()
{
  int w = 0, list[5] = {3, 2, -7, 19, -18};
  do {
    cout<<list[w]<<endl;
    w++;
  }while (w<5);
  return 0;
}
