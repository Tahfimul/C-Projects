#include<iostream>
using namespace std;
//Program80 to print the positive numbers of a list of 5 numbers: 3, 2, -7, 19, -18 using Do While LOOP

int main()
{
  int w=0,i[5] = {0 , -1, 2, -4, 5};
  do
  {
    if (i[w] >= 0) {
      cout<<i[w]<<endl;
    }

    w++;
  }while(w<=4);
  return 0;
}
