#include<iostream>
using namespace std;
//Program52 to print first and last numbers from 13 and 17 using FOR LOOP
int main() {
  int w = 13, i[5];
  for(int b =13;b<=17;b++)
  {
    i[b-w]=b;
    switch(b-w)
    {
      case 0:
        cout<<"First number: "<<i[0]<<endl;
        break;
      case 4:
        cout<<"Last number: "<<i[4]<<endl;
        break;
    }
  }
  return 0;
}
