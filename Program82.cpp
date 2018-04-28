#include<iostream>
using namespace std;
//Program82 to print the odd numbers of a list of 5 numbers: 3,2,-7,19,-18 between 5 and 14 using Do While LOOP
int main()
{
  int w=5;
  do {
    if (w%2!=0) {
      cout<<w<<endl;
    }
    w++;
  }while (w<=14);
  return 0;
}
