#include<iostream>
using namespace std;
//Tahfimul Latif
//Program35
//to print first and last numbers from 13 and 17
//March 24, 2018
int main() {
  int w = 13;
  while (w<=17) {
    if (w==13) {
      cout<<"First number: "<<w<<endl;
    }
    if (w==17) {
      cout<<"Last number: "<<w<<endl;
    }
    w++;
  }
  return 0;
}
