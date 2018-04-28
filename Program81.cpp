#include<iostream>
using namespace std;
//Tahfimul Latif
//Program81
//to print the negative numbers of a list of 5 numbers: 3,2,-7,19,-18 (-19 to -2) using Do While LOOP
//March 24, 2018
int main()
{
  int w=-19;

  do{
    cout<<w<<endl;
    w+=4;
  }while(w<=-2);
  return 0;
}
